float vol=0;
int input=0;
void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600); // starting the Serial Monitor
  
}
void loop()
{
  input=analogRead(A0); //analogRead function is used to recive analog data
  vol=(input*5.0)/1024.0;//formula using for perform action
  Serial.print("voltage is:");
  Serial.println(vol);
}
