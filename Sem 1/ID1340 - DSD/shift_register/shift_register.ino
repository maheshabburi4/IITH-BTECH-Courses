int E=0;
int F=0;
int G=1;
int H=1;
int a,b,c,d,e,f,g,A,B,C,D;
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
{ A=(G&&H);
   B=E;
   C=F;
   D=G;
     
  digitalWrite(5, a);
  digitalWrite(6, b);
  digitalWrite(7, c);
  digitalWrite(8, d);
  digitalWrite(9, e);
  digitalWrite(10, f);
  digitalWrite(11, g);
  a=((!A&&!B&&!C&&D)||(B&&!C&&!D));
  b=(B&&(C^D));
  c=(!B&&C&&!D);
  d=((!A&&!B&&!C&&D)||(B&&!C&&!D)||(B&&C&&D));
  e=((B&&!C)||D);
  f=((!A&&!B&&D)||(!B&&C)||(C&&D));
  g=((!A&&!B&&!C)||(B&&C&&D));

 digitalWrite(13, LOW);
 delay(1000); 
 digitalWrite(13, HIGH);
 delay(1000);
 E=A;
 F=B;
 G=C;
 H=D;
}  
