// C++ code
//
void setup()
{
  
  pinMode(3 ,INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  Serial.begin(9600);


}

void loop()
{
  int a = digitalRead(3);
  
  Serial.println(a);
  
  if(a==1)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
  
  else
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }

  
}