#include <LiquidCrystal.h>
#include <DHT.h>
#define DHTTYPE DHT21
#define PHOTORESIST A0
DHT dht(7, DHTTYPE);
boolean button1=false;
boolean button2=true;
boolean button3=false;
boolean button4=true;
#define Button 2
#define Chooser 3
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);
int k=0;
int h=0;
byte Copyright[8] = {
      B11111,
      B10001,
      B10101,
      B10111,
      B10101,
      B10001,
      B11111,
     // B00000,
};
void setup() 
{
    lcd.createChar(0, Copyright);
    lcd.begin(16, 2);
    pinMode(Button, INPUT);
    pinMode(Chooser, INPUT);
    Serial.begin(9600);
    dht.begin();
    
}
 
void loop() 
{
  if (digitalRead(Button)==1){
    button1=!button1;
    delay(50);
  }
   if (digitalRead(Button)==0){
      button2=!button2;
  }
  if (button1==true && button2==false){
      k=k+1;
      button1=false;
      button2=true;
  }
  if (k==5){
    k=0;
  }
  
  switch(k){
  case 0:
    lcd.clear();
    lcd.print("=>Temperature");
    lcd.setCursor(0,1);
    lcd.print("Humidity");
    lcd.setCursor(0,0);
    if (digitalRead(Chooser)==1){
    button3=!button3;
    delay(50);
    }
    if (digitalRead(Chooser)==0){
      button4=!button4;
    }
    if (button3==true && button4==false){
      button3=false;
      button4=true;
      while (true){
        lcd.clear();
        lcd.print(dht.readTemperature());
        if (digitalRead(Chooser)==1){
          button3=true;
          delay(50);
        }
        if (digitalRead(Chooser)==0){
          button4=false;
        }
        Serial.println(button3);
        Serial.println(button4);
        if (button3==true && button4==false){
          button3=false;
          button4=true;
          break;
        }
        delay(200);
      }
    }
    break;
  case 1:
    lcd.clear();
    lcd.print("=>Humidity");
    lcd.setCursor(0,1);
    lcd.print("Illumination");
    lcd.setCursor(0,0);
    if (digitalRead(Chooser)==1){
    button3=!button3;
    delay(50);
    }
    if (digitalRead(Chooser)==0){
      button4=!button4;
    }
    if (button3==true && button4==false){
      button3=false;
      button4=true;
      while (true){
        lcd.clear();
        lcd.print(dht.readHumidity());
        if (digitalRead(Chooser)==1){
          button3=!button3;
          delay(50);
        }
        if (digitalRead(Chooser)==0){
          button4=!button4;
        }
        if (button3==true && button4==false){
          button3=false;
          button4=true;
          break;
        }
        delay(200);
      }
    }
    break;
  case 2:
    lcd.clear();
    lcd.print("=>Illumination");
    lcd.setCursor(0,1);
    lcd.print("Information");
    lcd.setCursor(0,0);
    if (digitalRead(Chooser)==1){
    button3=!button3;
    delay(50);
    }
    if (digitalRead(Chooser)==0){
      button4=!button4;
    }
    if (button3==true && button4==false){
      button3=false;
      button4=true;
      while (true){
        lcd.clear();
        lcd.print(analogRead(PHOTORESIST));
        lcd.setCursor(0,1);
        if (analogRead(PHOTORESIST)>850){
          lcd.print("LIGHT");
        }
        else{
          lcd.print("DARK");
        }
        if (digitalRead(Chooser)==1){
          button3=!button3;
          delay(50);
        }
        if (digitalRead(Chooser)==0){
          button4=!button4;
        }
        if (button3==true && button4==false){
          button3=false;
          button4=true;
          break;
        }
        delay(200);
      }
    }
    break;
  case 3:
    lcd.clear();
    lcd.print("=>Information");
    lcd.setCursor(0,1);
    lcd.print("Back/exit");
    lcd.setCursor(0,0);
    if (digitalRead(Chooser)==1){
    button3=!button3;
    delay(50);
    }
    if (digitalRead(Chooser)==0){
      button4=!button4;
    }
    if (button3==true && button4==false){
      button3=false;
      button4=true;
      while (true){
        lcd.clear();
        lcd.print("MicroOS ver 1.1b");
        lcd.setCursor(0,1);
        lcd.write(byte(0));
        lcd.print(" 2018 Dan2030");
        if (digitalRead(Chooser)==1){
          button3=!button3;
          delay(50);
        }
        if (digitalRead(Chooser)==0){
          button4=!button4;
        }
        if (button3==true && button4==false){
          button3=false;
          button4=true;
          break;
        }
        delay(200);
      }
    }
    break;
  case 4:
    lcd.clear();
    lcd.print("=>Back/exit");
    lcd.setCursor(0,0);
    if (digitalRead(Chooser)==1){
    button3=!button3;
    delay(50);
    }
    if (digitalRead(Chooser)==0){
      button4=!button4;
    }
    if (button3==true && button4==false){
      button3=false;
      button4=true;
      while (true){
        lcd.clear();
        lcd.print("BACK/EXIT");
        if (digitalRead(Chooser)==1){
          button3=!button3;
          delay(50);
        }
        if (digitalRead(Chooser)==0){
          button4=!button4;
        }
        if (button3==true && button4==false){
          button3=false;
          button4=true;
          break;
        }
        delay(200);
      }
    }
    break;
  } 
  delay(200);
}
