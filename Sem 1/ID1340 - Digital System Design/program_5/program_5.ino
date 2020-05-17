// Decade Counter dtarting from WXYZ with a delay of 500ms
int W=0;
int X=0;
int Y=0;
int Z=0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
  int D=(X&&Y&&Z)||(W&&!Z);
  int C=(!X&&Y&&Z)||(X&&!Y)||(X&&!Z);
  int B=(!W&&!Y&&Z)||(Y&&!Z);
  int A=!Z;
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(2, A);
  digitalWrite(3, B);
  digitalWrite(4, C);
  digitalWrite(5, D);
 
  W = digitalRead(9);
  X = digitalRead(8);
  Y = digitalRead(7);
  Z = digitalRead(6);

}
