#include <SoftwareSerial.h>

SoftwareSerial Insano(10,11);

#define LED 4

char orden;

void setup() {
  Serial.begin(9600);
  Insano.begin(38400);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  if(Insano.available())
  {
    orden = Insano.read();
    Serial.println(orden);
    if(orden == '1')
    {
      digitalWrite(LED, HIGH);
    }

    else if(orden == '2')
    {
      digitalWrite(LED, LOW);
    }
  }

  
  if(Serial.available())
  {
    Insano.write(Serial.read());
  }
}
