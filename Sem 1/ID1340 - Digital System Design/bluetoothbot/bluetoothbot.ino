int motor_input1=8;
int motor_input2=9;
int motor_input3=10;
int motor_input4=11;
String voice="";
void setup() 
{
  Serial.begin(9600);
  pinMode(motor_input1, OUTPUT);   //RIGHT MOTOR
  pinMode(motor_input2, OUTPUT);   //RIGHT MOTOR
  pinMode(motor_input3, OUTPUT);   //LEFT MOTOR
  pinMode(motor_input4, OUTPUT);   //LEFT MOTOR
}
void loop() 
{  0
  while(Serial.available()>0)
    {
    delay(10);
    char c=Serial.read();
   
    voice+=c;
    }
 if (voice.length() > 0) 
 {
  //Serial.println(voice);
  if(voice=="forward")
    {
    digitalWrite(motor_input1, HIGH);
    digitalWrite(motor_input2, LOW);
    digitalWrite(motor_input3, HIGH);
    digitalWrite(motor_input4, LOW);
    Serial.println("forward");
    delay(800);
    voice = "";
    }
  else 
  if(voice=="back")
    {
    digitalWrite(motor_input1, LOW);
    digitalWrite(motor_input2, HIGH);
    digitalWrite(motor_input3, LOW);
    digitalWrite(motor_input4, HIGH);
    Serial.println("back");
    delay(800);
    voice = "";
    }
  else 
  if(voice=="left")
    {
    digitalWrite(motor_input1, HIGH);
    digitalWrite(motor_input2, LOW);
    digitalWrite(motor_input3, LOW);
    digitalWrite(motor_input4, HIGH);
    Serial.println("left");
    delay(800);
    voice = ""; 
    }
  else 
  if(voice=="right")
    {
    digitalWrite(motor_input1, LOW);
    digitalWrite(motor_input2, HIGH);
    digitalWrite(motor_input3, HIGH);
    digitalWrite(motor_input4, LOW);
    Serial.println("right");
    delay(800);
    voice = "";
    }
  else 
  if(voice=="stop")
    {
    digitalWrite(motor_input1, LOW);
    digitalWrite(motor_input2, LOW);
    digitalWrite(motor_input3, LOW);
    digitalWrite(motor_input4, LOW);
    Serial.println("stop");
    delay(800);
    voice = "";
    }
  else
    { 
    voice = "";
    }  
   
   }
  }
