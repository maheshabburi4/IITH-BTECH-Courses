int P0 = 1;
int P1 = 1;
int P2 = 1;
int P3 = 1;
int Q0 = 1;
int Q1 = 1;
int Q2 = 1;
int Q3 = 1;
void sevenseg1(int a,int b,int c,int d,int e,int f,int g) {
  digitalWrite(0, a);
  digitalWrite(1, b);
  digitalWrite(2, c);
  digitalWrite(3, d);
  digitalWrite(4, e);
  digitalWrite(5, f);
  digitalWrite(6, g);
}
void sevenseg2(int a1,int b1,int c1,int d1,int e1,int f1,int g1) {
  digitalWrite(7, a1);
  digitalWrite(8, b1);
  digitalWrite(9, c1);
  digitalWrite(10, d1);
  digitalWrite(11, e1);
  digitalWrite(12, f1);
  digitalWrite(13, g1);
}
int convert(int S0,int S1,int S2,int S3,int S4){
  int sum;
  sum = (S0 * 1) + (S1 * 2) + (S2 * 4) + (S3 * 8) + (S4 * 16);
  return sum;
}
void Display(int X, int Y){
  if (Y = 1){
    if (X = 0){sevenseg1(0,0,0,0,0,0,1);}
    else if (X == 1){sevenseg1(1,0,0,1,1,1,1);}
    else if (X == 2){sevenseg1(0,0,1,0,0,1,0);}
    else if (X == 3){sevenseg1(0,0,0,0,1,1,0);}
    else if (X == 4){sevenseg1(1,0,0,1,1,0,0);}
    else if (X == 5){sevenseg1(0,1,0,0,1,0,0);}
    else if (X == 6){sevenseg1(0,1,0,0,0,0,0);}
    else if (X == 7){sevenseg1(0,0,0,1,1,1,1);}
    else if (X == 8){sevenseg1(0,0,0,0,0,0,0);}
    else {sevenseg1(0,0,0,0,1,0,0);}
  }
  if (Y == 2){
    if (X == 0){sevenseg2(0,0,0,0,0,0,1);}
    else if (X == 1){sevenseg2(1,0,0,1,1,1,1);}
    else if (X == 2){sevenseg2(0,0,1,0,0,1,0);}
    else if (X == 3){sevenseg2(0,0,0,0,1,1,0);}
    else if (X == 4){sevenseg2(1,0,0,1,1,0,0);}
    else if (X == 5){sevenseg2(0,1,0,0,1,0,0);}
    else if (X == 6){sevenseg2(0,1,0,0,0,0,0);}
    else if (X == 7){sevenseg2(0,0,0,1,1,1,1);}
    else if (X == 8){sevenseg2(0,0,0,0,0,0,0);}
    else {sevenseg2(0,0,0,0,1,0,0);}
  }
}
void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
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
}
void loop() {
  // put your main code here,to run repeatedly:
  int S0 = (!P0&&Q0) || (P0&&!Q0);
  int C0 = (P0&&Q0);
  int S1 = (P1&&Q1&&C0) || (!P1&&!Q1&&C0) || (P1&&!Q1&&!C0) || (!P1&&Q1&!C0);
  int C1 = (P1&&Q1) || (P1&&C0) || (Q1&&C0);
  int S2 = (P2&&Q2&&C1) || (!P2&&!Q2&&C1) || (P2&&!Q2&&!C1) || (!P2&&Q2&&!C1);
  int C2 = (P2&&Q2) || (P2&&C1) || (Q2&&C1);
  int S3 = (P3&&Q3&&C2) || (!P3&&!Q3&&C2)|| (P3&&!Q3&&!C2) || (!P3&&Q3&&!C2);
  int S4 = (P3&&Q3) || (P3&&C2) || (Q3&&C2);
  int Sum = convert(S0,S1,S2,S3,S4);
  int Unit = Sum % 10;
  int Ten = (Sum - Unit) / 10;
  Display(Unit,2);
  Display(Ten,1);
}