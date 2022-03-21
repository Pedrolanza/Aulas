const int led1 = 14;
  const int led2 = 13;
  const int led3 = 12;
  const int led4 = 11;
  const int led5 = 10;
  const int led6 = 9;
  const int led7 = 8;
  const int led8 = 7;
  const int led9 = 6;
  const int led10 = 5 ;
  const int botao1 = 4;
  const int botao2 = 3;
  const int botao3 = 2;

int var1;
int var2;
int var3;

void setup()
 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  
  
}

void loop()
{
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  if(var1){
     digitalWrite(led1,HIGH);
    delay(10);
      digitalWrite(led2,HIGH);
    delay(2000);
      digitalWrite(led3,HIGH);
   delay (5000);
      digitalWrite(led4,HIGH);
    delay(1000);
      digitalWrite(led5,HIGH);
    delay(100);
      digitalWrite(led6,HIGH);
    delay(900);
      digitalWrite(led7,HIGH);
    delay(500);
      digitalWrite(led8,HIGH);
    delay(400);
      digitalWrite(led9,HIGH);
    delay(9000);
      digitalWrite(led10,HIGH);
    delay(60);
  }
  if(var2){
      digitalWrite(led1,HIGH);
  
      digitalWrite(led2,HIGH);
    
      digitalWrite(led3,HIGH);
   
      digitalWrite(led4,HIGH);
    
      digitalWrite(led5,HIGH);
    
      digitalWrite(led6,HIGH);
    
      digitalWrite(led7,HIGH);
    
      digitalWrite(led8,HIGH);
    
      digitalWrite(led9,HIGH);
    
      digitalWrite(led10,HIGH);
    
    
  }
  if(var3){
    digitalWrite(led1,LOW);
  
      digitalWrite(led2,LOW);
    
      digitalWrite(led3,LOW);
   
      digitalWrite(led4,LOW);
    
      digitalWrite(led5,LOW);
    
      digitalWrite(led6,LOW);
    
      digitalWrite(led7,LOW);
    
      digitalWrite(led8,LOW);
    
      digitalWrite(led9,LOW);
    
      digitalWrite(led10,LOW);
    
    
    
  }
}
