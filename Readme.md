# PhoneGap Plugin for the [Trademob](http://www.trademob.com) iOS SDK

## Installation

* Add the Trademob iOS SDK to your Project. (see their [Documentation](https://sites.google.com/a/trademob.com/app-developer-doku/home/tmuniversaltracking/ios-tracking-sdk))
* Add this plugin to your PhoneGap Project.


## Usage

After you installed the SDK and the plugin you can use it like this:

```javascript
function startTradeMob () {
  var tradeMob = window.plugins.tradeMob;

  // Load TradeMob
  tradeMob.trackAppload();

  // Start in debug mode
  tradeMob.debugMode();
}
```

## About

Developed by [Frank Müller](http://twitter.com/suchasurge) at [Ubilabs](http://ubilabs.net).
