const int led =12;
const int lm=A0;
const int buz=8;
int val;
float temp=0;
void setup() {
  Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(buz,OUTPUT);
}
void loop() {
val =analogRead(lm);
temp=(float)val*(5/10.24);
if(temp>23){
  digitalWrite(led,HIGH);
  tone(buz,50);}
else{   digitalWrite(led,LOW);}
Serial.print("temperature: ");
Serial.print(temp);
Serial.println(" C");
delay(500);
}
