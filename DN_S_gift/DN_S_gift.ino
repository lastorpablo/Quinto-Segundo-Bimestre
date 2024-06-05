//librerias
#include <Wire.h>    
#include <LiquidCrystal_I2C.h>

//definicion para pines



#define ON(pin) digitalWrite(pin, HIGH);
#define OFF(pin) digitalWrite(pin, LOW);


byte anime1[] = {
  B00100,
  B01110,
  B10101,
  B01110,
  B00100,
  B00100,
  B01010,
  B10001
};

byte anime2[] = {
  B00100,
  B01110,
  B00100,
  B01110,
  B10101,
  B00100,
  B01010,
  B10001
};

byte anime3[] = {
  B11111,
  B11101,
  B11000,
  B11000,
  B11000,
  B11100,
  B11110,
  B11111
};

byte anime4[] = {
  B11111,
  B10111,
  B00011,
  B00011,
  B00011,
  B00111,
  B01111,
  B11111
};

byte moto1[] = {
  B00000,
  B00000,
  B00110,
  B00010,
  B01111,
  B10111,
  B10010,
  B01100
};


byte moto2[] = {
  B00000,
  B10100,
  B01100,
  B01000,
  B11110,
  B11001,
  B01001,
  B00110
};

//constructor para el LCD
LiquidCrystal_I2C lcd(0x27,16,2);


byte a = 0;
int time1 = 500;
int time2 = 600;

void setup()
{
  Serial.begin(9600);
  inicializaciones();
  pines_conf();
  ON(2);
  ON(5);
  lcd.createChar(1, anime1);
  lcd.createChar(2, anime2);
  lcd.createChar(3, anime3);
  lcd.createChar(4, anime4);
  lcd.createChar(5, moto1);
  lcd.createChar(6, moto2);
  
  
  
  for(a ; a < 9; a ++){
    delay(time1);
    lcd.setCursor(1,0);
    lcd.print("FELIZ PUMPE!!!");
    lcd.setCursor(2,1);
    lcd.print("DANANANAN");
    lcd.setCursor(12,1);
    lcd.write(1);
    delay(time1);
    lcd.setCursor(0,0);
    lcd.print("                ");
    lcd.setCursor(12,1);
    lcd.write(2);
    //delay(time1);
  }
  a = 10;
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(50);
  lcd.setCursor(3,0);
  lcd.print("FELICES 17");
  delay(700);
  lcd.setCursor(3,1);
  lcd.print("VAMOOOO");
  for(int i = 0; i < 3; i++){
    delay(300);
    lcd.setCursor(10,1);
    lcd.print("!");
    delay(300);
    lcd.setCursor(11,1);
    lcd.print("!");
    delay(300);
    lcd.setCursor(12,1);
    lcd.print("!");
    delay(300);
    lcd.setCursor(10,1);
    lcd.print("    ");
    delay(300);
  }
  delay(1500);
  lcd.setCursor(2,1);
  lcd.print("                ");
  lcd.setCursor(1,1);
  lcd.print("NI SE NOTAN");
  delay(200);
  lcd.setCursor(13,1);
  lcd.print(";)");
  delay(4500);
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(1,0);
  lcd.print("SOLO SE TIENEN");
  lcd.setCursor(3,1);
  lcd.print("17 UNA VEZ");
  delay(4500);
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(1,0);
  lcd.print("DISFRUTALO :)");
  lcd.setCursor(5,1);
  lcd.print("TQM");
  lcd.setCursor(9,1);
  lcd.write(3);
  lcd.setCursor(10,1);
  lcd.write(4);
  delay(2000);
  secmoto();
  OFF(5);
  OFF(2);
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
   
}

void secmoto() {
  int paso1 = 0; // Posición inicial del primer carácter
  int paso2 = 1; // Posición inicia                 l del segundo carácter (un espacio después de paso1)
  
  for(int i = 0; i < 17; i++) { 
    if(i > 0) { // Asegurarse de que no se limpia antes de la primera impresión
      lcd.setCursor(paso1 - 1, 1); // Limpiar el espacio previo de paso1
      lcd.print(" ");
      lcd.setCursor(paso2 - 1, 1); // Limpiar el espacio previo de paso2
      lcd.print(" ");
    }

    lcd.setCursor(paso1, 1);
    lcd.write(5); // Escribir primer carácter
    lcd.setCursor(paso2, 1);
    lcd.write(6); // Escribir segundo carácter

    delay(650);

    // Mover las posiciones de los caracteres
    paso1 = paso1 + 1;
    paso2 = paso2 + 1;
  }
}


void loop(){
}

void pines_conf(){
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

void inicializaciones(){
  lcd.init();
  lcd.backlight();
  ON(2);
  OFF(8);
}
