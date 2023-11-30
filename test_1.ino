   /*
  EMG-Muscular-Signal-Sensor
  made on 26 Jan 2021
  by Amir Mohammad Shojaee @ Electropeak
  Home

*/
int count =0;

void setup() {
Serial.begin(9600);

}

void loop() {
Serial.println(analogRead(A0));
int a=analogRead(A0);

if(a>=300)
 count++;
if (a>=450 && count>100)
count =0;

//Serial.println (count);



}
