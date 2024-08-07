#include <LedControl.h>

#define DIN_MATRIZ 6
#define CS_MATRIZ 5
#define CLK_MATRIZ 4

LedControl Matrix_LED = LedControl(DIN_MATRIZ,CLK_MATRIZ,CS_MATRIZ,1);

unsigned int valor_ADC;
unsigned int Control_velocidad = 1000;
unsigned int Vel_cora = 500;

byte letra_H[8]={
  0b00000000,
  0b01000010,
  0b01000010,
  0b01000010,
  0b01111110,
  0b01000010,
  0b01000010,
  0b01000010
  };

byte letra_O[8]={
  0b00000000,
  0b00111100,
  0b01000010,
  0b01000010,
  0b01000010,
  0b01000010,
  0b01000010,
  0b00111100
  };

byte letra_l[8]={
  0b00000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00111110
  };

byte letra_A[8]={
  0b00000000,
  0b00111100,
  0b01000010,
  0b01000010,
  0b01111110,
  0b01000010,
  0b01000010,
  0b01000010
  };

byte corazon[8]={
  0b00000000,
  0b01100110,
  0b10011001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte corazonUp1[8]={
  0b01100110,
  0b10011001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00000000
  };

byte corazonUp2[8]={
  0b10011001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00000000,
  0b00000000
  };  

byte corazonUp3[8]={
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00000000,
  0b00000000,
  0b00000000
  }; 

byte corazonUp4[8]={
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte corazonUp5[8]={
  0b01000010,
  0b00100100,
  0b00011000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte corazonUp6[8]={
  0b00100100,
  0b00011000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte corazonUp7[8]={
  0b00011000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte corazonUp8[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };  
  
void setup() {
  Serial.begin(9600);
  Matrix_LED.shutdown(0, false);
  Matrix_LED.setIntensity(0,15);
  Matrix_LED.clearDisplay(0);
}

void loop() {
  Num1();    
  delay(Control_velocidad); 
  Num2();
  delay(Control_velocidad);
  Num3();
  delay(Control_velocidad);
  Num4();
  delay(Control_velocidad);
  Num5();
  delay(Vel_cora);
  Num6();
  delay(Vel_cora);
  Num7();
  delay(Vel_cora);
  Num8();
  delay(Vel_cora);
  Num9();
  delay(Vel_cora);
  Num10();
  delay(Vel_cora);
  Num11();
  delay(Vel_cora);
  Num12();
  delay(Vel_cora);
  Num13();
  delay(Control_velocidad);  
}


void Num1(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,letra_H[i]);
    }
  }

void Num2(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,letra_O[i]);
    }
  }

void Num3(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,letra_l[i]);
    }
  }

void Num4(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,letra_A[i]);
    }
  }

void Num5(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazon[i]);
    }
  }  

void Num6(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp1[i]);
    }
  }  

void Num7(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp2[i]);
    }
  }

void Num8(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp3[i]);
    }
  }  

void Num9(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp4[i]);
    }
  } 

void Num10(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp5[i]);
    }
  } 

void Num11(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp6[i]);
    }
  } 

void Num12(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp7[i]);
    }
  } 

void Num13(){
  for(int i = 0; i < 8; i++){
    Matrix_LED.setRow(0,i,corazonUp8[i]);
    }
  }                              
