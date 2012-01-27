/**
 * @file
 * JavaScript behavior to update library open/closed status dynamically.
 */


/**
 * Prototype for updating library opening status.
 */
Drupal.DingLibraryStatusUpdater = function () {
  var self = this;
  self.libraryStatus = {};

  // Mapping of return values from Date.getDay() to day names.
  self.weekdays = ['sun', 'mon', 'tue', 'wed', 'thu', 'fri', 'sat'];

  /**
   * Constructor for the updater.
   */
  self.init = function () {
    if (self.isInitialised) { return; }
    self.isInitialised = true;

    // Get the settings from the Drupal settings object.
    self.settings = Drupal.settings.officeHours['node' + Drupal.settings.dingLibraryNids[0]];

    // When done initialising, call refresh the first time.
    self.reloadData();
  };

  /**
   * Recalculate opening status for a library.
   *
   * Returns true if library is open, false if not.
   */
  self.calculateOpenStatus = function (nid, data, datetime) {
    var rules, isOpen = false;
    if (!datetime) { datetime = self.getDatetime(); }

    $.each(data.week[datetime.day], function (idx, rule) {
      var open = self.parseTimeString(rule.open),
          close = self.parseTimeString(rule.close);

      // Now we have all the data we need, figure out if we're open.
      if ((datetime.hours > open.hours ||
           datetime.hours == open.hours && datetime.minutes >= open.minutes) &&
          (datetime.hours < close.hours ||
           datetime.hours == close.hours && datetime.minutes < close.minutes)) {
        isOpen = true;
      }
    });

    return isOpen;
  };

  /**
   * Get the current date/time as a structured object.
   *
   * Returns the data we need for calculation preformatted.
   */
  self.getDatetime = function () {
    var date = new Date(),
        datetime = {};

    datetime.day = self.weekdays[date.getDay()];
    datetime.hours = date.getHours();
    datetime.minutes = date.getMinutes();
    return datetime;
  };

  /**
   * Parse the time string returned from office hours module.
   */
  self.parseTimeString = function (timeString) {
    var parts = timeString.split(':');

    if (parts.length > 1) {
      return {
        'hours': parseInt(parts[0], 10),
        'minutes': parseInt(parts[1], 10)
      };
    }
  };

  /**
   * Reload the status data from the server.
   */
  self.reloadData = function () {
    $.getJSON(self.settings.callback + '/' + Drupal.settings.dingLibraryNids.join(',') + '/' + self.settings.field_name, {}, function (response, textStatus) {
      self.statusData = response.data;
      self.updateStatusAll();
    });
  };

  /**
   * Helper function to reload status regularly.
   */
  self.reloadDataEvery = function (interval) {
    window.clearInterval(self.reloadInterval);

    self.reloadInterval = window.setInterval(self.reloadData, interval);

    // The status is always updated every 10 seconds. This does not
    // remote calls, and is not computationally intensive, so it should
    // not be a burden on either server or client.
    self.updateInterval = window.setInterval(self.updateStatusAll, 10000);
  };

  /**
   * Update the status for a single library.
   */
  self.updateStatus = function (nid, data, datetime) {
    var isOpen = self.calculateOpenStatus(nid, data, datetime),
        label, statusClass;

    // Only act when the status changes.
    if (!self.libraryStatus.hasOwnProperty(nid) || self.libraryStatus[nid] != isOpen) {
      self.libraryStatus[nid] = isOpen;

      // Send an event so other scripts may react to the change.
      $('body').trigger('DingLibraryStatusChange', [nid, isOpen]);

      if (isOpen) {
        label = Drupal.t('open');
        statusClass = 'open';
      }
      else {
        label = Drupal.t('closed');
        statusClass = 'closed';
      }

      $('#node-' + nid + ' .library-openstatus')
        // Update the label.
        .text(label)
        // Remove the existing status classes.
        .removeClass('open')
        .removeClass('closed')
        // Add the current status as a class.
        .addClass(statusClass);
    }
  };

  /**
   * Update the status for a all libraries.
   */
  self.updateStatusAll = function () {
    // Generate the datetime outside the loop, so to only do it once.
    var datetime = self.getDatetime();
    if (!self.statusData) { return; }

    $.each(self.statusData, function (nid, data) {
      self.updateStatus(nid, data, datetime);
    });
  };

  self.init();
  return self;
};

// Set up our status update when the document is loaded.
jQuery(function($) {
  // Set up status updater.
  var updater = new Drupal.DingLibraryStatusUpdater();

  // Reload library status data every 10 minutes.
  updater.reloadDataEvery(600000);

  // Expose our updater instance on the Drupal global object.
  Drupal.dingLibraryStatusUpdaterInstance = updater;
});

