void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(D4,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float ldr= analogRead(A0);
  Serial.println(ldr);
  if (ldr<=50){
  digitalWrite(D4,HIGH);
  delay(100);
  digitalWrite(D3,HIGH);
  delay(100);
  digitalWrite(D2,HIGH);
  delay(100);
  digitalWrite(D1,HIGH);
  delay(100);
  }
  else {
  digitalWrite(D4,LOW);
  delay(100);
  digitalWrite(D3,LOW);
  delay(100);
  digitalWrite(D2,LOW);
  delay(100);
  digitalWrite(D1,LOW);
  delay(100);
  }
}
