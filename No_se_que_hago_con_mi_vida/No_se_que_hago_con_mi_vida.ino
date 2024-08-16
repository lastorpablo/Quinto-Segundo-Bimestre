#include <LedControl.h>

#define DIN_MATRIZ 2
#define CS_MATRIZ 3
#define CLK_MATRIZ 4

LedControl Matriz_D = LedControl(DIN_MATRIZ,CLK_MATRIZ,CS_MATRIZ,1);

byte cora_1[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00011000
  };

byte cora_2[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00100100,
  0b00011000
  };

byte cora_3[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte cora_4[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte cora_5[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte cora_6[8]={
  0b00000000,
  0b00000000,
  0b10000001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte cora_7[8]={
  0b00000000,
  0b01000010,
  0b10000001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte cora_8[8]={
  0b00000000,
  0b01100110,
  0b10000001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };

byte cora_9[8]={
  0b00000000,
  0b01100110,
  0b10011001,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000
  };


//nombre aqui 
byte D_1[8]={
  0b00000011,
  0b01111001,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01111001,
  0b00000011
  };

byte D_2[8]={
  0b00000011,
  0b00111001,
  0b01000100,
  0b01000100,
  0b01111100,
  0b01000100,
  0b01000101,
  0b00000011
  };

byte D_3[8]={
  0b00000011,
  0b01000101,
  0b01100100,
  0b01010100,
  0b01001100,
  0b01000100,
  0b01000101,
  0b00000011
  };

byte D_4[8]={
  0b00000011,
  0b00111001,
  0b01000100,
  0b01000100,
  0b01111100,
  0b01000100,
  0b01000101,
  0b00000011
  };

byte D_5[8]={
  0b00000011,
  0b01000101,
  0b01100100,
  0b01010100,
  0b01001100,
  0b01000100,
  0b01000101,
  0b00000011  
  };


//I love U
byte Love_1[8]={
  0b00000011,
  0b01111101,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b01111101,
  0b00000011
  };

byte Love_2[8]={
  0b00000011,
  0b01000001,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01111101,
  0b00000011
  };

byte Love_3[8]={
  0b00000011,
  0b00111001,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01000100,
  0b00111001,
  0b00000011
  };

byte Love_4[8]={
  0b00000011,
  0b01000101,
  0b01000100,
  0b01000100,
  0b01000100,
  0b00101000,
  0b00010001,
  0b00000011
  };

byte Love_5[8]={
  0b00000011,
  0b01111001,
  0b01000000,
  0b01000000,
  0b01111000,
  0b01000000,
  0b01111001,
  0b00000011
  };

byte Love_6[8]={
  0b00000011,
  0b01000101,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01000100,
  0b00111001,
  0b00000011
  };


//cora 2
byte cora_num2[8]={
  0b11111111,
  0b10011001,
  0b00000000,
  0b00000000,
  0b00000000,
  0b10000001,
  0b11000011,
  0b11100111
  };

  
//vacio
byte vacio[8]={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };


//you can do it
byte puedes_1[8]={
  0b00000011,
  0b01111101,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010001,
  0b00000011
  };

byte puedes_2[8]={
  0b00000011,
  0b01000101,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01000100,
  0b00111001,
  0b00000011
  };

byte puedes_3[8]={
  0b00000011,
  0b01111001,
  0b01000100,
  0b01000100,
  0b01111000,
  0b01000000,
  0b01000001,
  0b00000011
  };

byte puedes_4[8]={
  0b00000011,
  0b01000101,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01000100,
  0b00111001,
  0b00000011
  };

byte puedes_5[8]={
  0b00000011,
  0b01111001,
  0b01000000,
  0b01000000,
  0b01111000,
  0b01000000,
  0b01111001,
  0b00000011
  };

byte puedes_6[8]={
  0b00000011,
  0b01111001,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01000100,
  0b01111001,
  0b00000011
  };

byte puedes_7[8]={
  0b00000011,
  0b01111001,
  0b01000000,
  0b01000000,
  0b01111000,
  0b01000000,
  0b01111001,
  0b00000011
  };

byte puedes_8[8]={
  0b00000011,
  0b00111001,
  0b01000000,
  0b01000000,
  0b00111000,
  0b00000100,
  0b01111001,
  0b00000011
  };


//cierre 
byte cierre_1[8]={
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte cierre_2[8]={
  0b11000000,
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte cierre_3[8]={
  0b11100000,
  0b11000000,
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte cierre_4[8]={
  0b11110000,
  0b11100000,
  0b11000000,
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte cierre_5[8]={
  0b11111000,
  0b11110000,
  0b11100000,
  0b11000000,
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000000
  };

byte cierre_6[8]={
  0b11111100,
  0b11111000,
  0b11110000,
  0b11100000,
  0b11000000,
  0b10000000,
  0b00000000,
  0b00000000
  };

byte cierre_7[8]={
  0b11111110,
  0b11111100,
  0b11111000,
  0b11110000,
  0b11100000,
  0b11000000,
  0b10000000,
  0b00000000
  };

byte cierre_8[8]={
  0b11111111,
  0b11111110,
  0b11111100,
  0b11111000,
  0b11110000,
  0b11100000,
  0b11000000,
  0b10000000
  };

byte cierre_9[8]={
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111100,
  0b11111000,
  0b11110000,
  0b11100000,
  0b11000000
  };

byte cierre_10[8]={
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111100,
  0b11111000,
  0b11110000,
  0b11100000
  };

byte cierre_11[8]={
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111100,
  0b11111000,
  0b11110000
  };

byte cierre_12[8]={
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111100,
  0b11111000
  };

byte cierre_13[8]={
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111100
  };

byte cierre_14[8]={
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111110
  };

byte cierre_15[8]={
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111,
  0b11111111
  };


//persona xd
byte person_1[8]={
  0b00111000,
  0b00111000,
  0b01010100,
  0b00111000,
  0b00010000,
  0b00010000,
  0b00101000,
  0b01000100
  };

byte person_2[8]={
  0b00111000,
  0b00111000,
  0b00010000,
  0b00111000,
  0b01010100,
  0b00010000,
  0b00101000,
  0b01000100
  };

int tiempo = 500;
int tiempo2 = 850;
int tiempo3 = 300;

void setup() {
  Serial.begin(9600);
  Matriz_D.shutdown(0, false);
  Matriz_D.setIntensity(0,15);
  Matriz_D.clearDisplay(0);
}

void loop() {
  //cora 1
  delay(tiempo);
  cora_uno();
  delay(tiempo);
  cora_dos();
  delay(tiempo);
  cora_tres();
  delay(tiempo);
  cora_cuatro();
  delay(tiempo);
  cora_cinco();
  delay(tiempo);
  cora_seis();
  delay(tiempo);
  cora_siete();
  delay(tiempo);
  cora_ocho();
  delay(tiempo);
  cora_nueve();
  delay(tiempo);
  //nombre
  D_uno();
  delay(tiempo2);
  D_dos();
  delay(tiempo2);
  D_tres();
  delay(tiempo2);
  D_cuatro();
  delay(tiempo2);
  D_cinco();
  delay(tiempo2);
  //love
  Love_uno();
  delay(tiempo2);
  Love_dos();
  delay(tiempo2);
  Love_tres();
  delay(tiempo2);
  Love_cuatro();
  delay(tiempo2);
  Love_cinco();
  delay(tiempo2);
  Love_seis();
  delay(tiempo2);
  //cora 2
  cora_two();
  delay(tiempo);
  //nada
  nada();
  delay(tiempo);
  //puedes
  //cora 2
  cora_two();
  delay(tiempo);
  //nada
  nada();
  delay(tiempo);
  //puedes
  //cora 2
  cora_two();
  delay(tiempo);
  //nada
  nada();
  delay(tiempo);
  //puedes
  puedes_uno();
  delay(tiempo2);
  puedes_dos();
  delay(tiempo2);
  puedes_tres();
  delay(tiempo2);
  puedes_cuatro();
  delay(tiempo2);
  puedes_cinco();
  delay(tiempo2);
  puedes_seis();
  delay(tiempo2);
  puedes_siete();
  delay(tiempo2);
  puedes_ocho();
  delay(tiempo2);
  //persona xd
  person_uno();
  delay(tiempo);
  person_dos();
  delay(tiempo);
  person_uno();
  delay(tiempo);
  person_dos();
  delay(tiempo);
  person_uno();
  delay(tiempo);
  person_dos();
  delay(tiempo);
  //cora 1
  delay(tiempo);
  cora_uno();
  delay(tiempo);
  cora_dos();
  delay(tiempo);
  cora_tres();
  delay(tiempo);
  cora_cuatro();
  delay(tiempo);
  cora_cinco();
  delay(tiempo);
  cora_seis();
  delay(tiempo);
  cora_siete();
  delay(tiempo);
  cora_ocho();
  delay(tiempo);
  cora_nueve();
  delay(tiempo);
  //cierre
  cierre_uno();
  delay(tiempo3);
  cierre_dos();
  delay(tiempo3);
  cierre_tres();
  delay(tiempo3);
  cierre_cuatro();
  delay(tiempo3);
  cierre_cinco();
  delay(tiempo3);
  cierre_seis();
  delay(tiempo3);
  cierre_siete();
  delay(tiempo3);
  cierre_ocho();
  delay(tiempo3);
  cierre_nueve();
  delay(tiempo3);
  cierre_diez();
  delay(tiempo3);
  cierre_once();
  delay(tiempo3);
  cierre_doce();
  delay(tiempo3);
  cierre_trece();
  delay(tiempo3);
  cierre_catorce();
  delay(tiempo3);
  cierre_quince();
  delay(tiempo);
}


void cora_uno(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_1[i]);
    }
  }

void cora_dos(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_2[i]);
    }
  }

void cora_tres(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_3[i]);
    }
  }

void cora_cuatro(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_4[i]);
    }
  }

void cora_cinco(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_5[i]);
    }
  }

void cora_seis(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_6[i]);
    }
  }

void cora_siete(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_7[i]);
    }
  }

void cora_ocho(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_8[i]);
    }
  }

void cora_nueve(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_9[i]);
    }
  }

//nombre construcciones 
void D_uno(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,D_1[i]);
    }
  }

void D_dos(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,D_2[i]);
    }
  }

void D_tres(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,D_3[i]);
    }
  }

void D_cuatro(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,D_4[i]);
    }
  }

void D_cinco(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,D_5[i]);
    }
  }

//love
void Love_uno(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,Love_1[i]);
    }
  }

void Love_dos(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,Love_2[i]);
    }
  }

void Love_tres(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,Love_3[i]);
    }
  }

void Love_cuatro(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,Love_4[i]);
    }
  }

void Love_cinco(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,Love_5[i]);
    }
  }

void Love_seis(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,Love_6[i]);
    }
  }


//cora 2
void cora_two(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cora_num2[i]);
    }
  }


//vacio
void nada(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,vacio[i]);
    }
  }


//you can do it
void puedes_uno(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_1[i]);
    }
  }

void puedes_dos(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_2[i]);
    }
  }

void puedes_tres(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_3[i]);
    }
  }

void puedes_cuatro(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_4[i]);
    }
  }

void puedes_cinco(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_5[i]);
    }
  }

void puedes_seis(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_6[i]);
    }
  }

void puedes_siete(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_7[i]);
    }
  }

void puedes_ocho(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,puedes_8[i]);
    }
  }


//cierre
void cierre_uno(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_1[i]);
    }
  }

void cierre_dos(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_2[i]);
    }
  }

void cierre_tres(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_3[i]);
    }
  }

void cierre_cuatro(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_4[i]);
    }
  }

void cierre_cinco(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_5[i]);
    }
  }

void cierre_seis(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_6[i]);
    }
  }

void cierre_siete(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_7[i]);
    }
  }

void cierre_ocho(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_8[i]);
    }
  }

void cierre_nueve(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_9[i]);
    }
  }

void cierre_diez(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_10[i]);
    }
  }

void cierre_once(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_11[i]);
    }
  }

void cierre_doce(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_12[i]);
    }
  }

void cierre_trece(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_13[i]);
    }
  }

void cierre_catorce(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_14[i]);
    }
  }

void cierre_quince(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,cierre_15[i]);
    }
  }



//persona xd
void person_uno(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,person_1[i]);
    }
  }

void person_dos(){
  for(int i = 0; i < 8; i++){
    Matriz_D.setRow(0,i,person_2[i]);
    }
  }
