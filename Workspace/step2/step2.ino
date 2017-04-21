// the setup function runs once when you press reset or power the board

int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(5, OUTPUT);
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  
  analogWrite(5, brightness);   
  Serial.println(brightness);
    brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(50);                       
  
}
