#include <SoftwareSerial.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h> 

#define pin_servo 3
#define Cantidad_Leds 7
#define pin_Led 9

Adafruit_NeoPixel pixels(Cantidad_Leds, pin_Led, NEO_GRB + NEO_KHZ800); 
SoftwareSerial Insano(10, 11);

Servo my_servo;

char estado;
int grados = 0;

void setup() {
  Serial.begin(9600);
  Insano.begin(38400);
  pixels.begin();
  pinMode(pin_servo, OUTPUT);
  my_servo.attach(pin_servo);
  my_servo.write(0);
}

void loop() {
  if (Insano.available()) {
    estado = Insano.read();
    Serial.println(estado); 
  }

  if (Serial.available()) {
    Insano.write(Serial.read());
  }

  Call_Servo_uwu();
  Call_NeoPixel_UnU();
  delay(20);
}

void Call_NeoPixel_UnU() {
  switch (estado) {
    case '1': NeoPixel_PAR_ON(); break;
    case '2': NeoPixel_PAR_OFF(); break;
    case '3': NeoPixel_IMPAR_ON(); break;
    case '4': NeoPixel_IMPAR_OFF(); break;
  }
}

void Call_Servo_uwu() {
  int Actu_grades = -1;

  switch (estado) {
    case 'a': Actu_grades = 0; break;
    case 'b': Actu_grades = 10; break;
    case 'c': Actu_grades = 20; break;
    case 'd': Actu_grades = 30; break;
    case 'e': Actu_grades = 40; break;
    case 'f': Actu_grades = 50; break;
    case 'g': Actu_grades = 60; break;
    case 'h': Actu_grades = 70; break;
    case 'i': Actu_grades = 80; break;
    case 'j': Actu_grades = 90; break;
    case 'k': Actu_grades = 100; break;
    case 'l': Actu_grades = 110; break;
    case 'm': Actu_grades = 120; break;
    case 'n': Actu_grades = 130; break;
    case 'o': Actu_grades = 140; break;
    case 'p': Actu_grades = 150; break;
    case 'q': Actu_grades = 160; break;
    case 'r': Actu_grades = 170; break;
    case 's': Actu_grades = 180; break;
}

  if (Actu_grades != -1 && Actu_grades != grados) {
    grados = Actu_grades;
    Mov_servo();
  }
  
}

void NeoPixel_PAR_ON() {
  for (int i = 0; i < Cantidad_Leds; i++) {
    if (i % 2 == 0) {
      pixels.setPixelColor(i, 255, 165, 0);
    }
  }
  pixels.show();
}

void NeoPixel_PAR_OFF() {
  for (int i = 0; i < Cantidad_Leds; i++) {
    if (i % 2 == 0) {
      pixels.setPixelColor(i, 0, 0, 0);
    }
  }
  pixels.show();
}

void NeoPixel_IMPAR_ON() {
  for (int i = 0; i < Cantidad_Leds; i++) {
    if (i % 2 != 0) {
      pixels.setPixelColor(i, 0, 128, 0);
    }
  }
  pixels.show();
}

void NeoPixel_IMPAR_OFF() {
  for (int i = 0; i < Cantidad_Leds; i++) {
    if (i % 2 != 0) {
      pixels.setPixelColor(i, 0, 0, 0);
    }
  }
  pixels.show();
}

void Mov_servo() {
  Serial.println("Giro de Servo - Motor");
  my_servo.write(grados);
}
