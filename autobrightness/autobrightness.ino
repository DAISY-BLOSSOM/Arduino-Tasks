const int ldr=A0;
const int led =12;
int val;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 val=analogRead(ldr);
 val=map(val,0,1023,0,255);
 analogWrite(led,val);

}
