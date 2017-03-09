/*
 * WORKSHOP INTRODUCAO A ARDUINO @CESARBR -- 09/03/2017
 * @ErickSimoes @eron93br
 * Código para o Módulo First Robot + Módulo Semáfoto
 */

void setup() {
  // Declara as saidas digitais como entrada ou saida (E/S ou I/O)
  pinMode(8, OUTPUT);  // nariz          [VERDE]
  pinMode(9, OUTPUT);  // led verde baixo
  pinMode(10, OUTPUT); // led amarelo baixo
  pinMode(11, OUTPUT); // led vermelho baixo
  pinMode(12, OUTPUT); // olho esquerdo  [VERMELHO]
  pinMode(13, OUTPUT); // olho direito   [VERMELHO]
}

int contador = 0;  // declaracao inicial da variavel contador

void loop() {
  if (contador % 2 == 0) {
   digitalWrite(13, HIGH);
   digitalWrite(12, HIGH);
  } else {
   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
  }

  switch(contador) {
    case 0:
		digitalWrite(11, HIGH);  digitalWrite(10, LOW);  digitalWrite(9, LOW);  digitalWrite(8, LOW);
		break; 
    case 1:
		digitalWrite(11, LOW);  digitalWrite(10, HIGH);  digitalWrite(9, LOW);
		break;
    case 2:
		digitalWrite(11, LOW);  digitalWrite(10, LOW);  digitalWrite(9, HIGH);
		break;
    case 3:
		digitalWrite(8, HIGH);
		break;
  }

  contador = contador + 1;    // incrementa contador 
  
  if(contador == 4) { 
    contador = 0;
  }
  
  delay(500);
}

