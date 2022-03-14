const int led1 = 2;
const int botao1 = 3;

int var;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(botao1,INPUT);
}

void loop()
{
 var = digitalRead(botao1);
  
  if(var){
    digitalWrite(led1,LOW);
  }else{
    digitalWrite(led1,HIGH);
}
  delay(10);
  
}
