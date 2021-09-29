void setup() {
pinMode(8, INPUT_PULLUP);    
Serial.begin(57600)
;}

void loop() {

Serial.println(digitalRead(8));
}
