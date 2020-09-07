// Here is code to drive stepper motor 1 time 360 degee rotation and counter rotation

#include <Stepper.h>

char serialData;

// change this to fit the number of steps per revolution
const int stepsPerRevolution = 200;  
const int stepsforret = 200 ;

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // put your setup code here, to run once:
 
   // set the speed at 40 rpm:
  myStepper.setSpeed(40);
  Serial.begin(9600);
  
}

void loop() {
  // red_led
  if(Serial.available() > 0){
     serialData = Serial.read();
     Serial.print(serialData);
  
     if(serialData == '1'){
      Serial.println("clockwise");
     
         myStepper.step(-stepsPerRevolution);
         delay(100);

         // step one revolution in the other direction:
         Serial.println("counterclockwise");
         myStepper.step(stepsforret);
         
  
        }
  
  }
}
