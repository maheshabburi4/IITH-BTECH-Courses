// Enter the two numbers in binary to be added  
int D=1;       int H=1;
int C=1;       int G=1;
int B=0;       int F=1;
int A=0;       int E=1;
void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
}
void loop()
{
  int S0=(A&&!E)||(!A&&E);                                                      int C0=(A&&E);
  int S1=(!B&&F&&!C0)||(!B&&!F&&C0)||(B&&!F&&!C0)||(B&&F&&C0);                  int C1=(B&&C0)||(B&&F)||(F&&C0);
  int S2=(!C&&G&&!C1)||(!C&&!G&&C1)||(C&&!G&&!C1)||(C&&G&&C1);                  int C2=(C&&C1)||(C&&G)||(G&&C1);
  int S3=(!D&&H&&!C2)||(!D&&!H&&C2)||(D&&!H&&!C2)||(D&&H&&C2);                  int C3=(D&&C2)||(D&&H)||(H&&C2);
  int O=S0;                                                                                                               int S=((C3&&!S3&&!S2)||(!C3&&S3&&S1)||(!C3&&S3&&S2)||(S3&&S2&&S1));         
  int N=((C3&&!S3&&!S2&&!S1)||(!C3&&S3&&S2&&!S1)||(C3&&S3&&!S2&&S1)||(!C3&&!S3&&S1)||(!S3&&S2&&S1));                      int R=(C3&&S2)||(C3&&S3);
  int M=((!C3&&!S3&&S2)||(C3&&!S2&&!S1)||(C3&&S3&&!S2));                                                                  int Q=0;
  int L=((!C3&&S3&&!S2&&!S1)||(C3&&!S3&&!S2&&S1)||(C3&&S3&&S2&&!S1));                    int P=0;
 int a1=(!L&&!M&&!N&&O)||(M&&!N&&!O);
 int b1=(M&&!N&&O)||(M&&N&&!O);
 int c1=(!M&&N&&!O);
 int d1=(!L&&!M&&!N&&O)||(M&&!N&&!O)||(M&&N&&O);
 int e1=(M&&!N)||O;
 int f1=(!L&&!M&&O)||(!M&&N)||(N&&O);
 int g1=(!L&&!M&&!N)||(M&&N&&O);
 int a2=(!P&&!Q&&!R&&S)||(Q&&!R&&!S);
 int b2=(Q&&!R&&S)||(Q&&R&&!S);
 int c2=(!Q&&R&&!S);
 int d2=(!P&&!Q&&!R&&S)||(Q&&!R&&!S)||(Q&&R&&S);
 int e2=(Q&&!R)||S;
 int f2=(!P&&!Q&&S)||(!Q&&R)||(R&&S);
 int g2=(!P&&!Q&&!R)||(Q&&R&&S);
  digitalWrite(2, a1);
  digitalWrite(3, b1);
  digitalWrite(4, c1);
  digitalWrite(5, d1);
  digitalWrite(6, e1);
  digitalWrite(7, f1);
  digitalWrite(8, g1);
  digitalWrite(9, a2);
  digitalWrite(10, b2);
  digitalWrite(11, c2);
  digitalWrite(12, d2);
  digitalWrite(13, e2);
  digitalWrite(14, f2);
  digitalWrite(15, g2);
}  
