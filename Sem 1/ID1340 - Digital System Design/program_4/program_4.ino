// Program to display counter(Counting Decoder) of wxyz without using 7447 IC decoder
int a,b,c,d,e,f,g,A,B,C,D;
int w=1;
int x=0;
int y=1;
int z=0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop()
{
  A=(x&&y&&z)||(w&&!z);
  B=(!x&&y&&z)||(x&&!y)||(x&&!z);
  C=(!w&&!y&&z)||(y&&!z);
  D=(!z);
  a=(!A&&!B&&!C&&D)||(B&&!C&&!D);
  b=(B&&!C&&D)||(B&&C&&!D);
  c=(!B&&C&&!D);
  d=(!B&&!C&&D)||(B&&!C&&!D)||(B&&C&&D);
  e=(B&&!C)||D;
  f=(!A&&!B&&D)||(!B&&C)||(C&&D);
  g=(!A&&!B&&!C)||(B&&C&&D);
  
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);
}
