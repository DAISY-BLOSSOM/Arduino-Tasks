const int led=12;
const int pot=A0;
int val=0;
void setup() {
  // put your setup code here, to run once:
 // pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(pot);
  val/=4;
  analogWrite(led,val);

}
