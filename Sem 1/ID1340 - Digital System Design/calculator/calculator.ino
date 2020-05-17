#include <LiquidCrystal.h>
#include <Keypad.h>

LiquidCrystal lcd(9,8,5,4,3,2);
const byte ROWS = 4;
const byte COLS = 5;

char keys [ROWS] [COLS] = {
  {'7', '8', '9', '/', 's'},
  {'4', '5', '6', '*', '$'},
  {'1', '2', '3', '-', '%'},
  {'C', '0', '=', '+', '.'},
};
byte rowPins[ROWS] = {13 ,12 ,11 ,10};
byte colPins[COLS] = {A0,A1,A2,A3,A4};

Keypad myKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


boolean presentValue = false;
boolean next = false;
boolean final = false;
String num1, num2;
float answer;
char op;


void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Mehar");
  lcd.setCursor(0,1);
  lcd.print("    Presents    ");
  delay(5000);
  lcd.setCursor(0,0);
  lcd.print(" Arduino based  ");
  lcd.setCursor(0,1);
  lcd.print("  Calculator"    );
  delay(5000);
  lcd.clear();

}

void loop(){
  char key = myKeypad.getKey();

  if (key != NO_KEY && (key=='1'||key=='2'||key=='3'||key=='4'||key=='5'||key=='6'||key=='7'||key=='8'||key=='9'||key=='0'||key=='.'))
  {
    if (presentValue != true)
    {
      num1 = num1 + key;
      int numLength = num1.length();
      lcd.setCursor(15 - numLength, 0); //to adjust one whitespace for operator
      lcd.print(num1);
      Serial.print(num1);
      final = true;
    }
    else 
    {
      num2 = num2 + key;
      int numLength = num2.length();
      lcd.setCursor(15 - numLength, 1);
      lcd.print(num2);
      Serial.print(num2);
      final = true;

    }
  }


  else if (presentValue == false && key != NO_KEY && (key == '/' || key == '*' || key == '-' || key == '+' || key == '%' || key == 's' || key == '$'))
  {
    if (presentValue == false)
    {
      presentValue = true;
      op = key;
      lcd.setCursor(15,0);
      lcd.print(op);
      Serial.print(op);
    }
  }

  else if (final == true && key != NO_KEY && key == '='){
    if (op == '+'){
      answer = num1.toFloat() + num2.toFloat();
    }
    else if (op == '-'){
      answer = num1.toFloat() - num2.toFloat();
    }
    else if (op == '*'){
      answer = num1.toFloat() * num2.toFloat();
    }
    else if (op == '/'){
      answer = num1.toFloat() / num2.toFloat();
    }
    else if (op == 's'){
      answer = pow(num1.toFloat(),num2.toFloat());
    }
    else if (op == '%'){
      answer = num1.toFloat()/100;
    }
    else if (op == '$'){
      answer = pow(num1.toFloat(),(1/num2.toFloat()));
    }
      lcd.clear();
      lcd.setCursor(15,0);
      lcd.autoscroll();
      lcd.print(answer);
      Serial.print(answer);
      lcd.noAutoscroll();
  }
  else if (key != NO_KEY && key == 'C'){
    lcd.clear();
    presentValue = false;
    final = false;
    num1 = "";
    num2 = "";
    answer = 0;
    op = ' ';
  }
 
} 
