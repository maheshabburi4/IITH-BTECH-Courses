//Enter the two numbers to be multiplied  
int D=1;       int H=1;
int C=1;       int G=1;
int B=1;       int F=1;
int A=1;       int E=1;
void setup() 
{ 
  Serial.begin(9600);
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
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
}
void loop() 
{
 int S0=((E&&A)+((E&&B)<<1)+((E&&C)<<2)+((E&&D)<<3));
 int S1=(((F&&A)<<1)+((F&&B)<<2)+((F&&C)<<3)+((F&&D)<<4));
 int S2=(((G&&A)<<2)+((G&&B)<<3)+((G&&C)<<4)+((G&&D)<<5));
 int S3=(((H&&A)<<3)+((H&&B)<<4)+((H&&C)<<5)+((H&&D)<<6));
 int I=S0+S1+S2+S3;
 int l=(I/100)%2;       int h=((I%100)/10)%2;         int d=((I%100)%10)%2;
 int k=(I/200)%2;       int g=((I%100)/20)%2;         int c=(((I%100)%10)/2)%2;
 int j=(I/400)%2;       int f=((I%100)/40)%2;         int b=(((I%100)%10)/4)%2;
 int i=(I/800)%2;       int e=((I%100)/80)%2;         int a=(((I%100)%10)/8)%2;
 int a1=(!a&&!b&&!c&&d)||(b&&!c&&!d);
 int b1=(b&&!c&&d)||(b&&c&&!d);
 int c1=(!b&&c&&!d);
 int d1=(!b&&!c&&d)||(b&&!c&&!d)||(b&&c&&d);
 int e1=(b&&!c)||d;
 int f1=(!a&&!b&&d)||(!b&&c)||(c&&d);
 int g1=(!a&&!b&&!c)||(b&&c&&d);
 int a2=(!e&&!f&&!g&&h)||(f&&!g&&!h);
 int b2=(f&&!g&&h)||(f&&g&&!h);
 int c2=(!f&&g&&!h);
 int d2=(!f&&!g&&h)||(f&&!g&&!h)||(f&&g&&h);
 int e2=(f&&!g)||h;
 int f2=(!e&&!f&&h)||(!f&&g)||(g&&h);
 int g2=(!e&&!f&&!g)||(f&&g&&h); 
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
digitalWrite(16, l);
digitalWrite(17, k);
digitalWrite(18, j);
digitalWrite(19, i);
Serial.println(I, BIN);
}
