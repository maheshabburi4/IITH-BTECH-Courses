int A=0;
int B=0;
int C=0;
int G,H,I,D,E,F,a,b,c,d,e,f,g;
void setup() 
{
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() 
{
  G=(!A&&!B);
  H=A;
  I=(B^C);
  a=((G^I)&&!H);
  b=(G&&(H^I));
  c=(!G&&H&&!I);
  d=((!H&&(G^I))||(G&&H&&I));
  e=(I||(G&&!H));
  f=((!G&&H)||(!G&&I)||(H&&I));
  g=((!G&&!H)||(G&&H&&I));
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  delay(500);
  
  digitalWrite(5, a);
  digitalWrite(6, b);
  digitalWrite(7, c);
  digitalWrite(8, d);
  digitalWrite(9, e);
  digitalWrite(10, f);
  digitalWrite(11, g);
A=G;
B=H;
C=I;
}   
