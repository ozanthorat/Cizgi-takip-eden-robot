#define sensorL 10
#define sensorC 9
#define sensorR 8

#define motorR1 6
#define motorR2 7
#define motorL1 4
#define motorL2 3

#define EA 5   
#define EB 11  

int hiz = 85;

void setup (){
  pinMode(sensorL, INPUT);
  pinMode(sensorC, INPUT);
  pinMode(sensorR, INPUT);

  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);

  pinMode(EA, OUTPUT);
  pinMode(EB, OUTPUT);
}

void loop(){
  if(digitalRead(sensorL) == 0 && digitalRead(sensorC) == 1 && digitalRead(sensorR) == 0){
    ileri();
  }

  else if(digitalRead(sensorL) == 1 && digitalRead(sensorC) == 1 && digitalRead(sensorR) == 0){
    sag();
  }
else if(digitalRead(sensorL) == 1 && digitalRead(sensorC) == 0 && digitalRead(sensorR) == 0){
    sag();
  }
  else if(digitalRead(sensorL) == 0 && digitalRead(sensorC) == 1 && digitalRead(sensorR) == 1){
    sol();
  }
  else if(digitalRead(sensorL) == 0 && digitalRead(sensorC) == 0 && digitalRead(sensorR) == 1){
    sol();
  }
  else {
    dur();
  }
}

void ileri(){
  analogWrite(EA, hiz);
  analogWrite(EB, hiz);

  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);

  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
}

void sag(){
  analogWrite(EA, 0);      
  analogWrite(EB, hiz);    

  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, LOW);

  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
}

void sol(){
  analogWrite(EA, hiz);  
  analogWrite(EB, 0);  

  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);

  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, LOW);
}
void dur()
{
  analogWrite(EA, 0); 
  analogWrite(EB, 0); 

  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, LOW);

  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, LOW);
}