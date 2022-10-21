#include <EEPROM.h>
int a = 0;
int k = 0;
int a1=0;
int f;
int M[10];
float L[10];
int v=0;
float g=0;
void setup() {
  Serial.begin(9600);
  Serial.println("READY");
  while (true) {
    if (Serial.available()) {
      f = Serial.readString().toInt();
      M[k] = f;
      k=k+1;
      if (k==10){
        break;
      }
    }
  }
  k=0;
  Serial.println("READY2");
  while (true) {
    if (Serial.available()) {
      f = Serial.readString().toInt();
      L[k] = f;
      k=k+1;
      if (k==10){
        break;
      }
    }
  }
  Serial.println("DONE1");
  for (int i=0; i<10; i++){
    EEPROM.put(a, M[i]);
    a+=sizeof(int);
    
  }
  Serial.println(a);
  a1=a;
  for (int i=0; i<10; i++){
    EEPROM.put(a, L[i]);
    a+=sizeof(float);
  }
  Serial.println(a-a1);
  Serial.println("DONE2");
  a=0;
  for (int i=0; i<10; i++){
    EEPROM.get(a, v);
    a+=sizeof(int);
    Serial.println(v, DEC);
  }
  for (int i=0; i<10; i++){
    EEPROM.get(a, g);
    a+=sizeof(float);
    Serial.println(g, DEC);
  }
}
void loop() {
  // put your main code here, to run repeatedly:

}
