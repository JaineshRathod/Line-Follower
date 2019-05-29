int lmotorf = 10;
int lmotorb = 11;
int rmotorf= 8;
int rmotorb =9;
int lsensor =5;
int csensor =4;
int rsensor =3;

void setup() 
{
pinMode(lmotorf,OUTPUT);
pinMode(rmotorf,OUTPUT);
pinMode(lmotorb,OUTPUT);
pinMode(rmotorb,OUTPUT);
pinMode(lsensor,INPUT);
pinMode(csensor,INPUT);
pinMode(rsensor,INPUT);
}

void loop() 
{

if((digitalRead(lsensor)==HIGH)&&(digitalRead(csensor)==LOW)&&(digitalRead(rsensor)==HIGH))
{
digitalWrite(lmotorf,HIGH);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorf,HIGH);
digitalWrite(rmotorb,LOW);
}
else if((digitalRead(lsensor)==HIGH)&&(digitalRead(csensor)==HIGH)&&(digitalRead(rsensor)==LOW))
{
//digitalWrite(lmotorf,HIGH);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorf,LOW);
digitalWrite(rmotorb,LOW);

  for(int s=255;s>=127;s--)
  {
    analogWrite(lmotorf,s);
  }
}
else if((digitalRead(lsensor)==LOW)&&(digitalRead(csensor)==HIGH)&&(digitalRead(rsensor)==HIGH))
{
digitalWrite(lmotorf,LOW);
digitalWrite(lmotorb,LOW);
//digitalWrite(rmotorf,HIGH);
digitalWrite(rmotorb,LOW);

  for(int s=255;s>=127;s--)
    {
      analogWrite(rmotorf,s);
    }
}
else if((digitalRead(lsensor)==HIGH)&&(digitalRead(csensor)==LOW)&&(digitalRead(rsensor)==LOW))
{
//digitalWrite(lmotorf,HIGH);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorf,LOW);
//digitalWrite(rmotorb,HIGH);
  
  for(int s=255;s>=127;s--)
    {
      analogWrite(rmotorb,s);
      analogWrite(lmotorf,s);
    }
}
else if((digitalRead(lsensor)==LOW)&&(digitalRead(csensor)==LOW)&&(digitalRead(rsensor)==HIGH))
{
digitalWrite(lmotorf,LOW);
//digitalWrite(lmotorb,HIGH);
//digitalWrite(rmotorf,HIGH);
digitalWrite(rmotorb,LOW);

  for(int s=255;s>=127;s--)
      {
        analogWrite(rmotorf,s);
        analogWrite(lmotorb,s);
      }
}
else if((digitalRead(lsensor)==LOW)&&(digitalRead(csensor)==LOW)&&(digitalRead(rsensor)==LOW))
{
digitalWrite(lmotorf,HIGH);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorf,HIGH);
digitalWrite(rmotorb,LOW);
}
else
{
digitalWrite(lmotorf,LOW);
digitalWrite(rmotorf,LOW);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorb,LOW);
}
}
