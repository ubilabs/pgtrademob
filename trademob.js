var TradeMob = function(){};

TradeMob.prototype.trackAppload = function() {
  cordova.exec("PGTradeMob.trackAppload");
};

TradeMob.prototype.debugMode = function() {
  cordova.exec("PGTradeMob.debugMode");
};

TradeMob.prototype.disableGPS = function() {
  cordova.exec("PGTradeMob.disableGPS");
};

TradeMob.prototype.trackActionOnce = function(action, value, subid) {
  var options = {
    action: action,
    value: value,
    subid: subid
  };

  cordova.exec("PGTradeMob.trackActionOnce", options);
};

TradeMob.prototype.trackActionAlways = function(action, value, subid) {
  var options = {
    action: action,
    value: value,
    subid: subid
  };

  cordova.exec("PGTradeMob.trackActionAlways", options);
};

cordova.addConstructor(function() {
  if(!window.plugins) window.plugins = {};
  window.plugins.tradeMob = new TradeMob();
});