//pin designation for components
const int ledRed = 11;
const int ledYellow = 10;
const int ledGreen = 9; 
const int button = 8;
const int buzzer = 7;
int buttonState = 0;
int state = 0;


void setup() {
  //define pin IO
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}


void loop() {
  //detect button press
  buttonState = digitalRead(button);
  if (buttonState == HIGH)
    state = 1;
  
 if (state) {
   //LED cycling logic
    digitalWrite(ledRed, HIGH);   // turn the LED on 
    delay(12000);
    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(3000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    digitalWrite(ledRed, LOW);

    digitalWrite(ledGreen, HIGH);
    delay(12000);
    tone(buzzer, 1000); 
    delay(3000);        
    noTone(buzzer);     
    digitalWrite(ledGreen, LOW);
    
    digitalWrite(ledYellow, HIGH);
    tone(buzzer, 1000); 
    delay(3000);        
    noTone(buzzer);     
    digitalWrite(ledYellow, LOW);
 }
 //LED blink with no button press
  else{ 
    digitalWrite(ledRed, HIGH);
    delay(500);
    digitalWrite(ledRed, LOW);
    delay(500);
  }
 
}