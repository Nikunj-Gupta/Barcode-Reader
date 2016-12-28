#include <LiquidCrystal.h>

/*

  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.

  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.


 This example code is in the public domain.

 */


// the setup routine runs once when you press reset:
  int count=0;
  LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {

  // initialize serial communication at 9600 bits per second:

  Serial.begin(9600);
  lcd.begin(16,2);
 

}

void display(int counter)
{
  if(counter==2)
{  
  lcd.setCursor(0,0);
  lcd.print("LAMP");
 delay(2000);
}
  //Serial.println("A");
  else if(counter==3)
{  
  lcd.setCursor(0,0);
  lcd.print("TABLE");
}  
  //Serial.println("B");
  else if(counter==4)  
{  
  lcd.setCursor(0,0);
  lcd.print("CHAIR");
}  
else if(counter==5)  
{  
  lcd.setCursor(0,0);
  lcd.print("PEN");
}  
else if(counter==6)  
{  
  lcd.setCursor(0,0);
  lcd.print("SCALE");
}  
else if(counter==7)  
{  
  lcd.setCursor(0,0);
  lcd.print("ERASER");
}  
  //Serial.println("C");
  else if(counter==8)
{  
  lcd.setCursor(0,0);
  lcd.print("IIITB");
}  
  //Serial.println("D");
}

// the loop routine runs over and over again forever:

void loop() {
  // read the input on analog pin 0:
  for(;;)
  {
  int sensorValue1 = analogRead(A0);
  delay(250);
  int sensorValue2 = analogRead(A0);
  delay(250);
  //Serial.println(123);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage1 = sensorValue1 * (5.0 / 1023.0);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);
    Serial.print(voltage1);
        Serial.print("    ");
    Serial.println(voltage2);


if(voltage1 <=1.00)
//while(voltage1 <= 0.10)
{
if(voltage1<=0.06 && voltage1>=0.00)
{
  if(voltage2<=0.06 && voltage2>=0.00)

  //if(voltage2!=voltage1)
  {
    count++;
  }
}
}
//else if(voltage1 > 1.00)
else
{
   //Serial.println("_!_");
 // display(count);
    //exit(0);
  //return;
  break;
}
    Serial.println(count);

  }

  display(count);
 
  //Serial.println(123);
  // print out the value you read:
  //Serial.print(voltage1);
   // delay(1000);
      //Serial.print("    ");
 // Serial.println(voltage2);
  //delay(1000);
}