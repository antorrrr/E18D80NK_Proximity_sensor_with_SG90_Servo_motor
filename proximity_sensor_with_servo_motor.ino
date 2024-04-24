/*

Code By: *----- ANTOR MONDAL -----*

E-mail: antor.mondal2002@gmail.com

Facebook: https://www.facebook.com/antor31021/
LinkedIn: www.linkedin.com/in/antor-mondal-084764287

N.B: Please do not use this code for business purpose 

*/

#include<Servo.h>

Servo servomotor;

#define proximity 9 // define pin 9 for the sensor

void setup() {
  
  servo.attach(6);

  pinMode(Proximity, INPUT);// define pin as Input sensor

  Serial.begin(9600);// setup serial monitor to display the result
}

void loop() {
  
  int ProxValue = digitalRead(Proximity);// read the sensor 
  
      if(ProxValue == 0) // 0 means LOW
      {
        Serial.println(" Obstacle Detected ");

        servo.write(90);
        delay(1000);
        servo.write(0);
        delay(500);
      }
     else
     {
       Serial.println(" All Clear ");

       servo.write(0);
     }
  delay(500);
}