const int led=12;
const int b1=3;
const int b2=4;
int val1 , val2;
void setup() {
  // put your setup code here, to run once:
  pinMode(led , OUTPUT);
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
val1=digitalRead(b1);
val2=digitalRead(b2);

if(val1==HIGH){
  digitalWrite(led,HIGH);
}
else if(val2==HIGH){
  digitalWrite(led,LOW);
}
}
