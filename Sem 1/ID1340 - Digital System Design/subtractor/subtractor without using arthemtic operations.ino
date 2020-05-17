// Enter the two numbers to be subtracted  
int D=1;       int L=1;
int C=0;       int K=1;
int B=1;       int J=1;
int A=0;       int I=1;
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
  pinMode(16, OUTPUT);
}
void loop()
{
  int h,i,j,k,V;
  if((I==0)&&(J==0)&&(K==0)&&(L==0))
  { 
    V=1; 
    k=D;
    j=C;
    i=B;
    h=A;
  }
  else
  {
    int w=!L;       int x=!K;  int y=!J;  int z=!I;
    int H=(x&&y&&z)||w;
    int G=(!x&&y&&z)||(x&&!y)||(x&&!z);
    int F=(!y&&z)||(y&&!z);
    int E=(!z);
    int S0=(A&&!E)||(!A&&E);                                                      int C0=(A&&E);
    int S1=(!B&&F&&!C0)||(!B&&!F&&C0)||(B&&!F&&!C0)||(B&&F&&C0);                  int C1=(B&&C0)||(B&&F)||(F&&C0);
    int S2=(!C&&G&&!C1)||(!C&&!G&&C1)||(C&&!G&&!C1)||(C&&G&&C1);                  int C2=(C&&C1)||(C&&G)||(G&&C1);
    int S3=(!D&&H&&!C2)||(!D&&!H&&C2)||(D&&!H&&!C2)||(D&&H&&C2);                  int C3=(D&&C2)||(D&&H)||(H&&C2);
    if(C3==0)
    {
      V=0;
      int p=!S3;       int q=!S2;  int r=!S1;  int s=!S0;
      k=(q&&r&&s)||(p&&!s);
      j=(!q&&r&&s)||(q&&!r)||(q&&!s);
      i=(!p&&!r&&s)||(r&&!s);
      h=(!s);
    }
    if(C3==1)
    {
      V=1;
      k=S3;
      j=S2;
      i=S1;
      h=S0; 
    }
  }
  int I=((k*B1000)+(j*B100)+(i*B10)+(h*B1));
  int J=(I%B1010);                        int K=(I/B1010);
  int O=(J%B10);                         int S=(K%B10);         
  int N=(J/B10)%B10;                       int R=(K/B10)%B10;
  int M=(J/B100)%B10;                       int Q=(K/B100)%B10;
  int L=(J/B1000)%B10;                       int P=(K/B1000)%B10;
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
  digitalWrite(16, V);
}  