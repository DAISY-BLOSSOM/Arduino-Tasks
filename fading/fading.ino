const int led=12;
int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<255;i++){
  analogWrite(led , i);
  delay(2);
}
for(i=255;i>0;i--){
   analogWrite(led , i);
  delay(2);
}
}
