// 2020/10/12

#include "Ms Timer2.h"
#define LIGHTSENSOR 13  //光センサー
#define SERVO 9 //サーボ
#define JINKAN 5 //人感センサー
#define LED1 14 //LED

void setup() {
  pinMode(LIGHTSENSOR, INPUT);
  pinMode(SERVO, OUTPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  short cnt1;
  while(analogRead(LIGHTSENSOR) > 128){
    //省電力モード解除？
    digitalWrite(LED, HIGH);
    cnt1 = 0;
    delay(1000);
    if(digitalRead(JINKAN) == HIGH){
      cnt1++;
      if(cnt1 > 180){
        Pochitto();
        cnt1 = 0;
      }
    }
  }
  cnt1 = 0;
  //省電力モード開始？
}

void Pochitto(){
  //サーボでポチ
}
