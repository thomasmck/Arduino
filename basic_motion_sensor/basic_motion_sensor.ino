#define movement 4
int prevState = 0;
int detected;

void setup() {
  // put your setup code here, to run once:
pinMode(movement, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
detected = digitalRead(movement);
Serial.begin(9600);
Serial.println("Checking for motion");
delay(1000);
if(detected != prevState){
    Serial.println("Motion detected");
    prevState = detected;
}
}
