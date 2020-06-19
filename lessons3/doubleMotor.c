char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
/*
输入1表示启动1号电机（移出正式代码）
输入2表示启动2号电机（移出正式代码）
输入f向前运动
输入b向后运动
输入s全部关闭
输入r向右转
输入l向左转
*/
void loop()
{
  /*
  Serial.println("Hello");
  delay(1000);
  
  if(Serial.available()>0){
    ch=Serial.read();
    if(ch=='0'){
      digitalWrite(8,HIGH);
    }
    else{
      digitalWrite(8,LOW);
    }
  }
  
  if(Serial.available()>0){
    ch=Serial.read();
    if(ch=='1'){
      digitalWrite(6,HIGH);
      digitalWite(7,LOW); 
    }
    if(ch=='2'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
    }
    if(ch=='f'){
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW); 
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
    }
    if(ch=='b'){
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH); 
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
    }
  }
*/
  if(Serial.available()>0){
    ch=Serial.read();
    switch(ch)
    {
      case 'f':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;

      case 'b':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
      
      case 'r':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
      
    case 'l':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
      
    case 's':
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      break;
      
    default:
    break;
    }
  }
}