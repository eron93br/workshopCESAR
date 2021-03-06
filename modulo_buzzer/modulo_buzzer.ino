/*
 * WORKSHOP INTRODUCAO A ARDUINO @CESARBR -- 09/03/2017
 * @ErickSimoes @eron93br
 * Código para o Módulo Nuzzer/LED
 */

/////////////////////////////////
// INICIALIZAÇÃO DAS VARIÁVEIS //
/////////////////////////////////
int pinoBuzzer = 13;//inicializando uma variável denominada
					//pinoBuzzer no pino digital 13 do Arduino.

///////////
// SETUP //
///////////

void setup() {
  pinMode(pinoBuzzer, OUTPUT);//configurando o pino13(pinoBuzzer)
  pinMode(7, INPUT); // entrada
}


///////////
// LOOP //
///////////

void loop() {
  tone(pinoBuzzer, 1000); //gerando no pino13 digital
  delay(500); //mantém o tom no Buzzer por 1/2s.
  noTone(pinoBuzzer); //interrompendo o tom no pino13
  					  //digital denominado como
  					  //pinoBuzzer.
  delay(500); //aguarda 0,25s com o Buzzer desligado.
}

