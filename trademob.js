var TradeMob = function(){};

TradeMob.prototype.trackAppload = function() {
  PhoneGap.exec("PGTradeMob.trackAppload");
};

TradeMob.prototype.debugMode = function() {
  PhoneGap.exec("PGTradeMob.debugMode");
};

TradeMob.prototype.disableGPS = function() {
  PhoneGap.exec("PGTradeMob.disableGPS");
};

TradeMob.prototype.trackActionOnce = function(action, value, subid) {
  var options = {
    action: action,
    value: value,
    subid: subid
  };

  PhoneGap.exec("PGTradeMob.trackActionOnce", options);
};

TradeMob.prototype.trackActionAlways = function(action, value, subid) {
  var options = {
    action: action,
    value: value,
    subid: subid
  };

  PhoneGap.exec("PGTradeMob.trackActionAlways", options);
};

PhoneGap.addConstructor(function() {
  if(!window.plugins) window.plugins = {};
  window.plugins.tradeMob = new TradeMob();
});
