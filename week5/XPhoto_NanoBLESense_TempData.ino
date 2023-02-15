/*
  Based on Reading Temperature & Humidity on Nano 33 BLE Sense example by Jose Garcia
 
  This example reads data from the on-board HTS221 sensor of the
  Nano 33 BLE Sense and prints the temperature and humidity sensor
  values to the Serial Monitor once a second.

  Circuit:
  - Arduino Nano 33 BLE Sense board

  This example code is in the public domain.

  Modified in Feb 2023 by Ellen Nickles
  Experimental Photography, Interactive Media Arts @ NYU

- Following this tutorial, Reading Temperature & Humidity on Nano 33 BLE Sense,
    https://docs.arduino.cc/tutorials/nano-33-ble-sense/humidity-and-temperature-sensor, 
    added code to respond to exceeding a threshold value by sending 1 byte of data to the serial port

  Suggested workflow:
  STEP 0: Install the HTS221 library to read the temperature and humidity sensors
          Tools > Manage Libraries > HTS221
  STEP 1: Observe range of sensor readings in serial monitor
  STEP 2: Set your threshold value in the variable above setup()
  STEP 3: Comment out all the serial.print() and serial.println() commands in loop()
  STEP 4a: Uncomment all the code to respond to exceeding a threshold value
  STEP 4b: Decide to use temperature or humidity value
           (save and upload to Arduino)

  You might need to repeat these steps when testing threshold values. 
*/

#include <Arduino_HTS221.h>

float old_temp = 0;
float old_hum = 0;

int threshold = 90;  // STEP 2: Set the threshold value
bool thresholdExceeded = false;

void setup() {
  Serial.begin(9600);
  while (!Serial)
    ;

  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
    while (1)
      ;
  }
}

void loop() {
  // read all the sensor values
  float temperature = HTS.readTemperature();
  float humidity = HTS.readHumidity();

  // check if the range values in temperature are bigger than 0,5 ºC
  // and if the range values in humidity are bigger than 1%
  if (abs(old_temp - temperature) >= 0.5 || abs(old_hum - humidity) >= 1) {
    old_temp = temperature;
    old_hum = humidity;
  }

  // STEP 1: Observe range of sensor readings in serial monitor
  // STEP 3: Comment out serial.print() and serial.println()
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity    = ");
  Serial.print(humidity);
  Serial.println(" %");

  // STEP 4a: Uncomment the code in this section
  // STEP 4b: Decide to use temperature or humidity value
  // If the value is above or below the threshold
  // if (humidity > threshold) {
  //   // check the capture state
  //   if (!thresholdExceeded) {
  //     // send the signal to the p5 web editor take a picture
  //     Serial.write("1");
  //     thresholdExceeded = true;
  //   }
  // } else {
  //   Serial.write("0");
  //   thresholdExceeded = false;
  // }

  delay(500);
}