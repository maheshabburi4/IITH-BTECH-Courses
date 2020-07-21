// Enter the two numbers(below 16 each)  to be added   
int D=0;       int H=1;
int C=0;       int G=1;
int B=1;       int F=1;
int A=0;       int E=0;
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
  int I=((C3*16)+(S3*8)+(S2*4)+(S1*2)+(S0*1));
  int J=(I%10);                        int K=(I/10);
  int O=(J%2);                         int S=(K%2);         
  int N=(J/2)%2;                       int R=(K/2)%2;
  int M=(J/4)%2;                       int Q=(K/4)%2;
  int L=(J/8)%2;                       int P=(K/8)%2;
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
