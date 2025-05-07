//sumber https://mikroavr.com/fungsi-millis-pada-arduino/
//14 Nov 2022

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  for (int x=0; x<1000; x++) {
    delay(1);
  }
  digitalWrite(13, LOW);
  for (int x=0; x<1000; x++) {
    delay(1);
  }
}
