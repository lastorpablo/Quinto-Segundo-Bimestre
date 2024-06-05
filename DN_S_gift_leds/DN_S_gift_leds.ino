
#define ON(pin) digitalWrite(pin, HIGH);
#define OFF(pin) digitalWrite(pin, LOW);

int salidas[9]={2,3,4,5,6,7,8,9,10};

int time = 400;

#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10




void setup()
{ 
  for(int i = 0; i < 9; i++)
  {
    pinMode(salidas[i], OUTPUT);
  }
}

void loop()
{
    sec1();
    delay(300);
    sec2();
    delay(300);
    sec3();
}

void sec1()
{
  
  delay(time);
  ON(led1);
  ON(led3);
  ON(led5);
  ON(led7);
  ON(led9);
  delay(time);
  OFF(led1);
  OFF(led3);
  OFF(led5);
  OFF(led7);
  OFF(led9);
  //delay(time);
  ON(led2);
  ON(led4);
  ON(led6);
  ON(led8);
  delay(time);
  OFF(led2);
  OFF(led4);
  OFF(led6);
  OFF(led8);
  //delay(time);
  ON(led1);
  ON(led3);
  ON(led5);
  ON(led7);
  ON(led9);
  delay(time);
  OFF(led1);
  OFF(led3);
  OFF(led5);
  OFF(led7);
  OFF(led9);
  //delay(time);
  ON(led2);
  ON(led4);
  ON(led6);
  ON(led8);
  delay(time);
  OFF(led2);
  OFF(led4);
  OFF(led6);
  OFF(led8);
  //delay(time);
  ON(led1);
  ON(led3);
  ON(led5);
  ON(led7);
  ON(led9);
  delay(time);
  OFF(led1);
  OFF(led3);
  OFF(led5);
  OFF(led7);
  OFF(led9);
  //delay(time); 
}

void sec2()
{
  
  ON(led1);
  ON(led2);
  ON(led3);
  ON(led4);
  ON(led5);
  ON(led6);
  ON(led7);
  ON(led8);
  ON(led9);
  delay(500);
  OFF(led1);
  OFF(led2);
  OFF(led3);
  OFF(led4);
  OFF(led5);
  OFF(led6);
  OFF(led7);
  OFF(led8);
  OFF(led9);
  delay(200);
  ON(led1);
  ON(led2);
  ON(led3);
  ON(led4);
  ON(led5);
  ON(led6);
  ON(led7);
  ON(led8);
  ON(led9);
  delay(500);
  OFF(led1);
  OFF(led2);
  OFF(led3);
  OFF(led4);
  OFF(led5);
  OFF(led6);
  OFF(led7);
  OFF(led8);
  OFF(led9);
  delay(200);
  ON(led1);
  ON(led2);
  ON(led3);
  ON(led4);
  ON(led5);
  ON(led6);
  ON(led7);
  ON(led8);
  ON(led9);
  delay(500);
  OFF(led1);
  OFF(led2);
  OFF(led3);
  OFF(led4);
  OFF(led5);
  OFF(led6);
  OFF(led7);
  OFF(led8);
  OFF(led9);
}

void sec3()
{
  for(int i = 0; i < 4; i++){
    ON(led5);
    delay(300);
    OFF(led5);
    ON(led4);
    ON(led6);
    delay(300);
    OFF(led4);
    OFF(led6);
    ON(led3);
    ON(led7);
    delay(300);
    OFF(led3);
    OFF(led7);
    ON(led2);
    ON(led8);
    delay(300);
    OFF(led2);
    OFF(led8);
    ON(led1);
    ON(led9);
    delay(300);
    OFF(led1);
    OFF(led9);
    //segunda parte
    delay(300);
    ON(led1);
    ON(led9);
    delay(300);
    OFF(led1);
    OFF(led9);
    ON(led2);
    ON(led8);
    delay(300);
    OFF(led2);
    OFF(led8);
    ON(led3);
    ON(led7);
    delay(300);
    OFF(led3);
    OFF(led7);
    ON(led4);
    ON(led6);
    delay(300);
    OFF(led4);
    OFF(led6);
    ON(led5);
    delay(300);
    OFF(led5);
  }
}
