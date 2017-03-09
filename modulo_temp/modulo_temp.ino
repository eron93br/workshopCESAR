/*
 * WORKSHOP INTRODUCAO A ARDUINO @CESARBR -- 09/03/2017
 * @ErickSimoes @eron93br
 * Código para o Módulo Sensor de Temperatura
 */

#include <Thermistor.h>
//Inicializa a biblioteca responsável por realizar
//os cálculos de conversão da temperatura,
//considerando um termistor de 10K. Caso possua outro
//valor de termistor, será necessário abrir o arquivo
//Thermistor.cpp da biblioteca e fazer as devidas
//alterações no valor da variável


Thermistor temp(0); //cria variável do tipo Thermistor para ler o pino
					//de entrada analógido (A0) do Arduino

float temperatura; //variável para armazenar o valor da temperatura

///////////
// SETUP //
///////////

void setup() {
	Serial.begin(9600); //setando a comunicação via porta
						//serial à uma velocidade de
						//9600bps(baud)
}

///////////
// LOOP //
///////////

void loop() {
	temperatura = temp.getTemp();
	Serial.print("Temperatura = "); //imprime a palavra Temperatura =
	Serial.println(temperatura); //imprime a temperatura na tela
	delay(1000); //aguarda por 1s para a próxima leitura de temperatura.
}

