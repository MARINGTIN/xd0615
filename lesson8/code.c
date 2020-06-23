int sensorValue = 0;//定义变量名和初始值

void setup()
{
  pinMode(A0, INPUT);//定义A0为输出
  Serial.begin(9600);//初始化串口通讯波特率为9600

}

void loop()
{

  sensorValue = analogRead(A0);//从A0读取输出值

  Serial.println(sensorValue);//在串口打印出来读取的数值
  delay(10); //暂停10ms，以方便读取
}