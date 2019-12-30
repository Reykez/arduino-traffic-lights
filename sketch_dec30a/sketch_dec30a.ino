// TRAFFIC LIGHTS
// by Chris and Kamil
// initial project 2019.12.30
// version 2019.12.30_10:22

#define led_red 8 
#define led_yellow 9
#define led_green 10

void setup() {
  pinMode(led_red, OUTPUT); // red
  pinMode(led_yellow, OUTPUT); // yellow
  pinMode(led_green, OUTPUT); // green
  
  disableAllLeds();
}
void loop() {
  enableOneLed('r');
  delay(8000);  
  enableLed('y');
  delay(2000);
  enableOneLed('g');
  delay(8000);
  enableOneLed('y');
  delay(2000);
}

void enableOneLed(char color) {
  disableAllLeds();
  enableLed(color);
}

void enableLed(char color) {
  switch (color) {
    case 'r':
      digitalWrite(led_red, HIGH);  
      break;
    case 'y':
      digitalWrite(led_yellow, HIGH);  
      break;
    case 'g':
      digitalWrite(led_green, HIGH);  
      break;
  }
}

void disableAllLeds() {
  digitalWrite(led_red, LOW);  
  digitalWrite(led_yellow, LOW);  
  digitalWrite(led_green, LOW);  
}
