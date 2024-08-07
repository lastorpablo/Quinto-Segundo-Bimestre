#include <SoftwareSerial.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h> 

#define pin_servo 3
#define Cantidad_Leds 7
#define pin_Led 9

Adafruit_NeoPixel pixels(Cantidad_Leds,pin_Led, NEO_GRB + NEO_KHZ800); 
SoftwareSerial Insano(10,11);

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
  
   if(Insano.available()){
    estado = Insano.read();
    Serial.println(estado); 
  }

  if(Serial.available()){
    Insano.write(Serial.read());
  }

  if(estado=='1') NeoPixel_PAR_ON();
  if(estado=='2') NeoPixel_PAR_OFF();
  if(estado=='3') NeoPixel_IMPAR_ON();
  if(estado=='4') NeoPixel_IMPAR_OFF();
 
  if(estado=='a') grados = 0;
  if(estado=='b') grados = 10;  
  if(estado=='c') grados = 20; 
  if(estado=='d') grados = 30;  
  if(estado=='e') grados = 40; 
  if(estado=='f') grados = 50; 
  if(estado=='g') grados = 60;  
  if(estado=='h') grados = 70;
  if(estado=='i') grados = 80;  
  if(estado=='j') grados = 90;  
  if(estado=='k') grados = 100; 
  if(estado=='l') grados = 110; 
  if(estado=='m') grados = 120;  
  if(estado=='n') grados = 130;
  if(estado=='o') grados = 140;  
  if(estado=='p') grados = 150; 
  if(estado=='q') grados = 160; 
  if(estado=='r') grados = 170;
  if(estado=='s') grados = 180;

  Mov_servo();
  delay(50);    
}

void NeoPixel_PAR_ON(){
  
  for(int i = 0; i < 7; i++){
    if(i % 2 == 0){
      pixels.setPixelColor(i,255,165,0);
      pixels.show();
      }
    }
}

void NeoPixel_PAR_OFF(){
  
  for(int i = 0; i < 7; i++){
    if(i % 2 == 0){
      pixels.setPixelColor(i,0,0,0);
      pixels.show();
      }
    }
}

void NeoPixel_IMPAR_ON(){
  
  for(int i = 0; i < 7; i++){
    if(i % 2 == 0){
      //funcion vacia
      }
    else{
      pixels.setPixelColor(i,0,128,0);
      pixels.show();
      }
    }
}

void NeoPixel_IMPAR_OFF(){
  
  for(int i = 0; i < 7; i++){
    if(i % 2 == 0){
      //funcion vacia
      }
    else{
      pixels.setPixelColor(i,0,0,0);
      pixels.show();
      }
    }
}
 
void Mov_servo() {
    static int lastGrados = -1; 
    if (grados != lastGrados) {
        Serial.println("Giro de Servo - Motor");
        my_servo.write(grados);
        lastGrados = grados;
    }
}
