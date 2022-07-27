#include <Servo.h> // connect motor controller pins to Arduino digital pins
// motor one  
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;
// servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int pos = 0;

void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2,  OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  servo1.attach(12);
  servo2.attach(11);
  servo3.attach(4);
  servo4.attach(3);
  servo5.attach(2);

  servo1.write(50);               //front R
  servo2.write(150);             // front L
  servo3.write(20);             //Back L
  servo4.write(80);            // Back R
  servo5.write(0);            // Camera
}

void demoOne()
{
  // this function will run the motors in both directions at a fixed speed
  // turn on motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);              // GO
  analogWrite(enA, 255);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);
  delay(11000);
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);               //STOP  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000);
 
  servo1.write(20);                     //front R
  servo2.write(200);                   //front L     Servo turning 
  servo3.write(1);                    //Back L             
  servo4.write(120);                 // Back R

  delay(2000);
  
  // now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);            // TURN
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(20000);
  
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);             //STOP
  digitalWrite(in4, LOW);
  delay(5000);
  
  // return back
  servo1.write(50);              //front R
  servo2.write(150);            // front L
  servo3.write(20);            //Back L
  servo4.write(80);           // Back R

  delay(2000);
  //
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 255);             //GO
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);
  delay(10000);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);            //STOP
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(5000);

  servo1.write(20);                     //front R
  servo2.write(200);                   //front L     Servo turning 
  servo3.write(1);                    //Back L             
  servo4.write(120);                 // Back R

  delay(2000);
  
  // now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);            // TURN
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(8000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);            //STOP
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(5000);

// return back
  servo1.write(50);              //front R
  servo2.write(150);            // front L
  servo3.write(20);            //Back L
  servo4.write(80);           // Back R
  delay(2000);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 255);             //GO
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);
  delay(5000);

   digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);            //STOP
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(4000);

  servo1.write(20);                     //front R
  servo2.write(200);                   //front L     Servo turning 
  servo3.write(1);                    //Back L             
  servo4.write(120);                 // Back R
  delay(2000);
    
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);            // TURN
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(4000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);            //STOP
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(5000);

  servo1.write(50);              //front R
  servo2.write(150);            // front L
  servo3.write(20);            //Back L
  servo4.write(80);           // Back R
  delay(2000);
   
 // here will put any operation means camera or servo
for(pos =0; pos <= 180; pos  += 1){
servo5.write(pos);
  delay(25);
 }
 for(pos =180; pos >= 0; pos  -= 1){
  servo5.write(pos);
  delay(25);
 }
 
  
 
}
  

void loop()
{
  demoOne();
  delay(1000);
//  demoTwo();
  //delay(1000);
for(;;);
}
