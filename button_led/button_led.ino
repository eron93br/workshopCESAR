
// WORKSHOP INTRODUCAO A ARDUINO  @CESAR -- 09/03/2017
// CODIGO PARA O MODULO LED COM BOTAO!



const int buttonPin = 2;     //  Numero do pino de pushbutton, botao!
const int ledPin =  13;      //  numero do pino de LED

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
