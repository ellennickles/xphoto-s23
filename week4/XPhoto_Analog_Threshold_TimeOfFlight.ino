/*
   Experimental Photography 2023
   Interactive Media Arts @ NYU
   Ellen Nickles

   Related sources:
   ITP Physical Computing Lab
   https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/
   https://itp.nyu.edu/physcomp/i2c-communication-with-a-time-of-flight-distance-sensor/
*/

// be sure to download the sensor library: Tools > Manage Libraries
// so that you can include it here
#include "Adafruit_VL53L0X.h"

// make an instance of the library
Adafruit_VL53L0X sensor = Adafruit_VL53L0X();

const int maxDistance = 2000;

// STEP 2: Set your threshold value
int threshold = 600;
bool thresholdExceeded = false;

void setup() {
  // initialize serial, wait 3 seconds for
  // Serial Monitor to open:
  Serial.begin(9600);
  if (!Serial) delay(3000);

  // initialize sensor, stop if it fails:
  if (!sensor.begin()) {
    Serial.println("Sensor not responding. Check wiring.");
    while (true);
  }
  /* config can be:
    VL53L0X_SENSE_DEFAULT: about 500mm range
    VL53L0X_SENSE_LONG_RANGE: about 2000mm range
    VL53L0X_SENSE_HIGH_SPEED: about 500mm range
    VL53L0X_SENSE_HIGH_ACCURACY: about 400mm range, 1mm accuracy
  */
  sensor.configSensor(Adafruit_VL53L0X::VL53L0X_SENSE_LONG_RANGE);
  // set sensor to range continuously:
  sensor.startRangeContinuous();
}

void loop() {
  // if the reading is done:
  if (sensor.isRangeComplete()) {
    // read the result:
    int reading = sensor.readRangeResult();
    // if it's with the max distance:
    if (reading < maxDistance) {

      // STEP 1: Observe range of sensor readings in serial monitor
      // print the result (distance in mm):
      Serial.println(reading);

      // STEP 3: Uncomment when you're ready to photograph!
      // If the value of the sensor is above or below a threshold
      //  if (reading < threshold) {
      //    // check the capture state
      //    if (!thresholdExceeded) {
      //      // send the signal to the p5 web editor take a picture
      //      Serial.write("1");
      //      thresholdExceeded = true;
      //    }
      //  } else {
      //    Serial.write("0");
      //    thresholdExceeded = false;
      //  }
    }
  }
}