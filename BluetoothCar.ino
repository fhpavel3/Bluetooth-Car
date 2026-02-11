int in1 = 4;
int in2 = 5;
int in3 = 6;
int in4 = 7;
int enA = 8;
int enB = 9;
int val;

void setup() 
{  
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT); 
  pinMode(in3, OUTPUT); 
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT); 
  Serial.begin(9600);
}

void loop()
{

  while (Serial.available() > 0)
  {
    val = Serial.read();
  }
  if( val == 'F') //Forward
    {
      Serial.println("Forward");
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);  
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
    else if(val == 'B') //Backward
    {
      Serial.println("Reverse");
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH); 
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }  
    else if(val == 'L') //Left
    {
      Serial.println("Turn Left");
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
    else if(val == 'R') //Right
    {
      Serial.println("Turn Right");
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW); 
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }    
    else if(val == 'S') //Stop
    {
      Serial.println("Stop");
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW); 
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
    else if(val == 'I') //Forward Right
    {
      Serial.println("Forward Right");
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
    else if(val == 'J') //Backward Right
    {
      Serial.println("Backward Right");
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
    else if(val == 'G') //Forward Left
    {
      Serial.println("Forward Left");
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
    else if(val == 'H') //Backward Left
    {
      Serial.println("Backward Left");
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW); 
      digitalWrite(enA,HIGH);
      digitalWrite(enB,HIGH);
    }
}
