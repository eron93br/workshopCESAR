

// WORKSHOP INTRODUCAO A ARDUINO  @CESAR -- 09/03/2017
// CODIGO PARA O MODULO DISPLAY DE SETE SEGMENTOS


// Cria uma matriz de acionamento para cada segmento do Display Ando Comum
// Caso o Display seja Catodo Comum inverta o "0" por "1" e o "1" por "0"
byte matriz_sete_seg [16][7] = { { 0,1,1,1,0,0,0 }, // = Digito F
{ 0,1,1,0,0,0,0 }, // = Digito E
{ 1,0,0,0,0,1,0 }, // = Digito D
{ 0,1,1,0,0,0,1 }, // = Digito C
{ 1,1,0,0,0,0,0 }, // = Digito B
{ 0,0,0,1,0,0,0 }, // = Digito A
{ 0,0,0,1,1,0,0 }, // = Digito 9
{ 0,0,0,0,0,0,0 }, // = Digito 8
{ 0,0,0,1,1,1,1 }, // = Digito 7
{ 0,1,0,0,0,0,0 }, // = Digito 6
{ 0,1,0,0,1,0,0 }, // = Digito 5
{ 1,0,0,1,1,0,0 }, // = Digito 4
{ 0,0,0,0,1,1,0 }, // = Digito 3
{ 0,0,1,0,0,1,0 }, // = Digito 2
{ 1,0,0,1,1,1,1 }, // = Digito 1
{ 0,0,0,0,0,0,0 } // = Digito 0
};



void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); //Pino 3 do Arduino ligado ao segmento B
  pinMode(4, OUTPUT); //Pino 4 do Arduino ligado ao segmento C
  pinMode(5, OUTPUT); //Pino 5 do Arduino ligado ao segmento D
  pinMode(6, OUTPUT); //Pino 6 do Arduino ligado ao segmento E
  pinMode(7, OUTPUT); //Pino 7 do Arduino ligado ao segmento F
  pinMode(8, OUTPUT); //Pino 8 do Arduino ligado ao segmento G
  pinMode(9, OUTPUT); //Pino 9 do Arduino ligado ao segmento PONTO
  acionaPonto(0); //Função que inicia com o ponto desligado
}


// FUNÇÕES //
//Função que aciona o ponto no display
void acionaPonto(byte ponto)
{
  digitalWrite(9, ponto);
}
//Função que aciona os dígitos do display
void acionaSegmentos(byte digito)
{
byte pino = 2;
//Percorre a matriz ligando os segmentos correspondentes ao dígito
for (byte contadorSeg = 0; contadorSeg < 7; ++contadorSeg)
{
  digitalWrite(pino, matriz_sete_seg[digito][contadorSeg]);
  ++pino;
}

acionaPonto(1); //Liga o ponto
delay(100); //Aguarda 100 milisegundos
acionaPonto(0); //Desliga o ponto
}
///////////
// LOOP //
///////////

void loop()
{
//Contador de 0 a 15, ligando os segmentos correspondentes
//0 a 9 = liga os segmentos correspondentes aos números
//10 a 15 = forma as letras A,B,C,D,E,F
for (byte contador = 0; contador < 16; contador++)
{
delay(500);
acionaSegmentos(contador);
}
delay(2000); //Aguarda 2 segundos para reiniciar o ciclo
}
