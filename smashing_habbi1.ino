void setup()
{
  pinMode(3, OUTPUT);
   pinMode(4,OUTPUT);
    pinMode(6,OUTPUT);
}

void loop()
{
 for(int i=0; i<=1; i++)
 {
  digitalWrite(3, HIGH);
   delay(1000);
  digitalWrite(3, LOW);
   delay(1000);
  }
 for(int j=0; j<=2; j++)
      {
      digitalWrite(4, HIGH);
      delay(1000); 
      digitalWrite(4, LOW);
      delay(1000);
      }
 for(int k=0; k<=1; k++)
 {
      digitalWrite(6, HIGH);
      delay(1000); 
      digitalWrite(6, LOW);
      delay(1000);
  }

}