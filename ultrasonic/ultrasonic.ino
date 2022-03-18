const int trig = 5;
const int echo = 3;
long duration;
int distance;
void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  Serial.print("distance measured = ");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
