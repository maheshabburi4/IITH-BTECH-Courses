// Program to display ABCD by connecting arduino to seven seg directly(not using 7447 IC decoder)
int a,b,c,d,e,f,g;
int A=1;
int B=0;
int C=1;
int D=0;

void setup()
{
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop()
{
  a=(!A&&!B&&!C&&D)||(B&&!C&&!D);
  b=(B&&!C&&D)||(B&&C&&!D);
  c=(!B&&C&&!D);
  d=(!B&&!C&&D)||(B&&!C&&!D)||(B&&C&&D);
  e=(B&&!C)||D;
  f=(!A&&!B&&D)||(!B&&C)||(C&&D);
  g=(!A&&!B&&!C)||(B&&C&&D);
  
  digitalWrite(14, a);
  digitalWrite(15, b);
  digitalWrite(16, c);
  digitalWrite(17, d);
  digitalWrite(18, e);
  digitalWrite(6, f);
  digitalWrite(2, g);
}
