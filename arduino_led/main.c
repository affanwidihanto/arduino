int LampuMerah = 8;
int LampuKuning = 9;
int LampuHijau = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(LampuMerah, OUTPUT);
pinMode(LampuKuning, OUTPUT);
pinMode(LampuHijau, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LampuMerah, HIGH);
digitalWrite(LampuKuning, LOW);
digitalWrite(LampuHijau, LOW);
delay(1000);
digitalWrite(LampuMerah, LOW);
digitalWrite(LampuKuning, HIGH);
digitalWrite(LampuHijau, LOW);
delay(1000);
digitalWrite(LampuMerah, LOW);
digitalWrite(LampuKuning, LOW);
digitalWrite(LampuHijau, HIGH);
delay(1000);
}
