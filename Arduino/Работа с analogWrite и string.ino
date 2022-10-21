String a;
String b;
String c;
int k=0;
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  while(Serial.available()){
    a=Serial.readString();
    Serial.println(a);
  }
  a.replace(",", "");
  for (int i=0; i<a.length(); i++){
    if (a[i]==' '){
      k=i; 
    }
  }
  b=a.substring(0,k);
  c=a.substring(k+1, a.length()-1);
  if (b.toInt()==0 || b.toInt()==1 || b.toInt()==2 || b.toInt()==4 || b.toInt()==7 || b.toInt()==8 || b.toInt()==12 || b.toInt()==13){
    Serial.print("Error! This PIN is not supported. Enter another PIN: ");
  }
  else{
    analogWrite(b.toInt(),c.toInt());
  }
}
