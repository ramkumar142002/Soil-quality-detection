//servo

#include <Servo.h>
 Servo slideas; 
 const int sensor_pin = A1;


void setup() {
  
 slideas.attach(6);
  Serial.begin(9600);
}

void loop() {
 
 slideas.write(0);
 delay(3000);
  
  Serial.print("Rotated\n");
  float moisture_percentage;
  int sensor_analog = analogRead(sensor_pin);
  moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  Serial.print("Moisture Percentage = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n\n");
  delay(1000);
  slideas.write(180);
   delay(3000);
  
}
