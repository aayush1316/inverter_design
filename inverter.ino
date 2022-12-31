#define A 13
#define B 12
void setup(){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  
}
void loop(){
  digitalWrite(A,1);
  digitalWrite(B,0);
  delay(10);
  digitalWrite(A,0);
  digitalWrite(B,1);
  delay(10);
}
