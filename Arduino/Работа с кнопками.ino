unsigned long t1 = 0;
unsigned long t2 = 0;
unsigned long t3 = 0;
unsigned long t4 = 0;
int k = 0;
int u = 0;
int f = 0;
int y = 0;
#define LED1 3
#define LED2 6
#define BUT1 4
#define BUT2 5
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  Serial.begin(9600);
}
void loop() {
  t1 = millis();
  boolean button1 = false;
  boolean button2 = true;
  boolean button3 = false;
  boolean button4 = true;
  if (digitalRead(BUT1) == 1) {
    button1 = !button1;
    delay(50);
    if (digitalRead(BUT1) == 0) {
      button2 = !button2;
    }
  }
  if (button1 == true && button2 == false) {
    u = 1;
  }
  if (digitalRead(BUT2) == 1) {
    button3 = !button3;
    delay(50);
    if (digitalRead(BUT2) == 0) {
      button4 = !button4;
    }
  }
  if (button3 == true && button4 == false) {
    f = 1;
  }
  if (u == 1) {
    t1 = millis();
    k = k + 1;
    if (k == 1) {
      t2 = t1;
    }
    Serial.println(t1-t2);
    digitalWrite(LED1, HIGH);
    if (t1 >= (t2 + 4000)) {
      digitalWrite(LED1, LOW);
      k = 0;
      u = 0;
    }
  }

  if (f == 1) {
    t3 = millis();
    y = y + 1;
    if (y == 1) {
      t4 = t3;
    }
    Serial.println(t3-t4);
    digitalWrite(LED2, HIGH);
    if (t3 >= (t4 + 4000)) {
      digitalWrite(LED2, LOW);
      y = 0;
      f = 0;
    }
  }
}
