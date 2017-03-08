// WORKSHOP INTRODUCAO A ARDUINO  @CESAR -- 09/03/2017
// CODIGO PARA O SENSOR DE PROXIMIDADE COM LEDs....

int VERMV = 9;
int AMARV = 10;
int VERDV = 11;
int VERMP = 12;
int VERDP = 13;
int SENSOR = A0;
int valor;



void setup()
{
                 pinMode(VERMV, OUTPUT);
                 pinMode(AMARV, OUTPUT);
                 pinMode(VERDV, OUTPUT);
                 pinMode(VERDP, OUTPUT);
}

void loop()
{
  // Configura todos os LEDs para estarem desligados.....
  digitalWrite(VERMV, LOW);
  digitalWrite(AMARV, LOW);
  digitalWrite(VERDV, HIGH);
  digitalWrite(VERMP, HIGH);
  digitalWrite(VERDP, LOW);

  // realiza leitura do sensor de proximidade! 
  valor = analogRead(SENSOR);
 

if (valor < 500) 
{
    delay (1000);

    digitalWrite(VERMV, LOW);
    digitalWrite(AMARV, HIGH);
    digitalWrite(VERDV, LOW);
    digitalWrite(VERMP, HIGH);
    digitalWrite(VERDP, LOW);

    delay (1500);

    digitalWrite(VERMV, HIGH);
    digitalWrite(AMARV, LOW); 
    digitalWrite(VERDV, LOW);
    digitalWrite(VERMP, LOW);
    digitalWrite(VERDP, HIGH);

    delay(1000);
}

}
