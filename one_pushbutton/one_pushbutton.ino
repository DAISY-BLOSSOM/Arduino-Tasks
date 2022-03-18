const int led1 = 12;
const int b1 = 3;
int val1 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(b1 , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(b1);
  if (val1 == HIGH) {
    digitalWrite(led1, HIGH);
   
  
  }
  else{
    digitalWrite(led1 , LOW);
  }
 delay(20);
}
