const int buttonPin = 2;
const int buttonPin2 = 4;

int buttonState = 0;
int buttonState2 = 0;
int lasButtonState = 0;
int val = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);

  if(buttonState != lastButtonState || buttonState2 != lastButtonState) {
    if(buttonState == HIGH) {
      val = 1;
      delay(50);
      Serial.println(val);
    }

    else {
      val = 0;
      delay(50);
      Serial.println(val);
    }
  }

  if(buttonState2 == HIGH) {
    val = 2;
    Serial.println(val);
  }
  else {
    val = 3;
    Serial.println(val);
  }
  lastButtonState = buttonState;
  lastButtonState = buttonState2;
}
