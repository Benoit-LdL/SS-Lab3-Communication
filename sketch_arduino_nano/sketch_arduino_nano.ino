#include <NewPing.h>
#include <Wire.h>

//--SENSORs--
#define T_PIN_S1    8
#define E_PIN_S1    7
#define T_PIN_S2    10
#define E_PIN_S2    9
#define T_PIN_S3    12
#define E_PIN_S3    11
#define MAX_DISTANCE 200
NewPing FrontSensor(T_PIN_S1, E_PIN_S1, MAX_DISTANCE);
NewPing RightSensor(T_PIN_S2, E_PIN_S2, MAX_DISTANCE);
NewPing LeftSensor(T_PIN_S3, E_PIN_S3, MAX_DISTANCE);
int s1,s2,s3;
int data[] = {0,0,0,0,0,0,0,0,0,0};

//--I2C--

void setup() {  
  Wire.begin(8); 
  Wire.onRequest(requestEvents);
  Serial.begin(9600);
  digitalWrite(SDA,LOW);
  digitalWrite(SCL,LOW);
}
 
void loop() {
  /*
  s1 = FrontSensor.ping_cm();
  //Serial.print(s1);
  for (int i = 9; i > 0;i--)
  {
    data[i] = data[i-1];  
  }
  data[0]=s1;
// /* DEBUG IN SERIAL CONSOLE
  for (int j = 0; j<10;j++)
  {
    Serial.print(data[j]);
    Serial.print("-");
  }
  Serial.println(); 
  */
// */
/* Ohter sensors
  s2 = RightSensor.ping_cm();
  s3 = LeftSensor.ping_cm();
  Serial.print(" | right: ");
  Serial.print(s2);
  Serial.print(" | left: ");
  Serial.println(s3);
  delay(250);
*/

delay(250);
}

void requestEvents()
{
  Wire.write("hello\n");
}
