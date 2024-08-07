#include <SoftwareSerial.h>
SoftwareSerial Insano(10,11);

char estado;
int analogo=0;
int luz_int=6400;   // Variable del tiempo de disparo del Deslizador 1 (Dimmer)
int mot_int=6450;   // Variable del tiempo de disparo del Deslizador 2 (Dimmer)
int time_int=0;     // Tiempo de diferencia entre los dos Deslizadores

void setup() {

  Serial.begin(9600);
  Insano.begin(38400);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  attachInterrupt(0,interrupcion0,RISING);  // Interrupcion 0 (pin2) 
}                                          // LOW, CHANGE, RISING, FALLING
 
void loop() {
  
   if(Insano.available()){
    estado = Insano.read();
    Serial.println(estado); 
  }

  if(Serial.available()){
    Insano.write(Serial.read());
  }

 if(estado=='1') mot_int = 6350;  // Los 8 saltos del Deslizador 2 (Dimmer)
 if(estado=='2') mot_int = 6250; 
 if(estado=='3') mot_int = 5750;  
 if(estado=='4') mot_int = 5450;  
 if(estado=='5') mot_int = 5150;  
 if(estado=='6') mot_int = 4850; 
 if(estado=='7') mot_int = 4550; 
 if(estado=='8') mot_int = 3550; 
 
 if(estado=='s') luz_int = 6300;   // Los 8 saltos del Deslizador 1 (Dimmer)
 if(estado=='t') luz_int = 6100;  
 if(estado=='u') luz_int = 5200;  
 if(estado=='v') luz_int = 4900;  
 if(estado=='w') luz_int = 4500; 
 if(estado=='x') luz_int = 4100; 
 if(estado=='y') luz_int = 3500;  
 if(estado=='z') luz_int = 3000;
 //Serial.println(luz_int);
}
 
void interrupcion0()    // Funcion que se ejecuta durante cada interrupion
{
  Serial.println("interrupcion");
  if (mot_int >= luz_int){        // Determina cual es mayo y encuentra el tiempo de la diferencia 
    time_int = mot_int - luz_int;
    delayMicroseconds(luz_int); 
    digitalWrite(3,HIGH);
    delayMicroseconds(time_int);
    digitalWrite(5,HIGH);
  }
  if (mot_int <= luz_int){
    time_int = luz_int - mot_int;
    delayMicroseconds(mot_int);
    digitalWrite(5,HIGH);
    delayMicroseconds(time_int);
    digitalWrite(3,HIGH);
  }

  delayMicroseconds(100);
  digitalWrite(5,LOW);
  digitalWrite(3,LOW);
}
