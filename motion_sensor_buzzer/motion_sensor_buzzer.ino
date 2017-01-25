#define movement 4
#define buzzer 5

int prevState = 0;
int detected;

void setup() {
  // put your setup code here, to run once:
pinMode(movement, INPUT);
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
detected = digitalRead(movement);
Serial.begin(9600);
if(detected != prevState){
    Serial.println("Motion detected");
    tone(buzzer, 262);
    delay(500);
    prevState = detected;
}else{
    noTone(buzzer);
}
}
