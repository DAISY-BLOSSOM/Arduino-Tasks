const int led = 12;
const int poten = A0;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(poten , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(poten);
  digitalWrite(led, HIGH);
  delay(val);
  digitalWrite(led, LOW);
  delay(val);

}
