/*
  Based on Controlling the On-Board RGB LED with Microphone example by Fabricio Troya
  
  This example reads audio data from the on-board PDM microphones, and prints
  out the samples to the Serial console. The Serial Plotter built into the
  Arduino IDE can be used to plot the audio data (Tools -> Serial Plotter)

  Circuit:
  - Arduino Nano 33 BLE Sense board

  This example code is in the public domain.

  Modified in Feb 2023 by Ellen Nickles
  Experimental Photography, Interactive Media Arts @ NYU

- Following this tutorial, Controlling the On-Board RGB LED with Microphone,
    https://docs.arduino.cc/tutorials/nano-33-ble-sense/microphone-sensor, 
    - Removed code to write to on-board RGB LED
    - Added code to respond to exceeding a threshold value by sending 1 byte of data to the serial port
    - Added slight delay for stability

  Suggested workflow:
  STEP 1: Observe range of sensor readings in serial monitor
  STEP 2: Set your threshold value in the variable above setup()
  STEP 3: Comment out all the serial.print() and serial.println() commands in loop()
  STEP 4: Uncomment all the code to respond to exceeding a threshold value
           (save and upload to board) 

  You might need to repeat these steps when testing threshold values. 
*/

#include <PDM.h>

// buffer to read samples into, each sample is 16-bits
short sampleBuffer[256];

// number of samples read
volatile int samplesRead;

int threshold = 5000;  // STEP 2: Set the threshold value
bool thresholdExceeded = false;

int soundValue;

void setup() {
  Serial.begin(9600);
  while (!Serial)
    ;

  // configure the data receive callback
  PDM.onReceive(onPDMdata);

  // optionally set the gain, defaults to 20
  // PDM.setGain(30);

  // initialize PDM with:
  // - one channel (mono mode)
  // - a 16 kHz sample rate
  if (!PDM.begin(1, 16000)) {
    Serial.println("Failed to start PDM!");
    while (1)
      ;
  }
}

void loop() {
  // wait for samples to be read
  if (samplesRead) {
    // print samples to the serial monitor or plotter
    for (int i = 0; i < samplesRead; i++) {
      // STEP 1: Observe range of sensor readings in serial monitor
      // STEP 3: Comment out serial.println() command
      soundValue = sampleBuffer[i];
      Serial.println(soundValue);
    }
    // clear the read count
    samplesRead = 0;
  }

  // STEP 4: Uncomment the code in this section
  // If the value is above or below the threshold
  // if (soundValue > threshold) {
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
 
  delay(50);
}

void onPDMdata() {
  // query the number of bytes available
  int bytesAvailable = PDM.available();

  // read into the sample buffer
  PDM.read(sampleBuffer, bytesAvailable);

  // 16-bit, 2 bytes per sample
  samplesRead = bytesAvailable / 2;
}
