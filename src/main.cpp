#include <Arduino.h>

int count = 0;
String myString = ""; //接收串口发送过来的值


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)//如果串口有数据
  {
    myString = Serial.readStringUntil('\n');//读取字符串
    if ((count == 0 && myString == "AA") || (count == 1 && myString =="BB")||
      (count == 2 && myString == "CC") || (count == 3 && myString =="DD"))
    {
      count++;
    }
    else
    {
      Serial.println("Wrong password!");
      count = 0;
    }


    if (count == 4)
    {
      Serial.println("Password correct!");
    }
      
    
  }
}


