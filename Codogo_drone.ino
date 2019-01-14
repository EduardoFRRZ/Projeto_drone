/*
 Barrett Anderies
 March 11, 2013
 This is a modified version of the PS3BT.ino example sketch by Kristian Lauszus
 
 23-3-2014 Código adaptado por Evandro Gonçalves - evandrosg@gmail.com
 */

#include <Servo.h>
Servo Esc30A;
Servo Esc30B;
Servo Esc30C;
Servo Esc30D;


int pino_motorA = 8;
int pino_motorB = 9;
int pino_motorC = 10;
int pino_motorD = 11;

int pino_pot = 0;

int Speed ;


// Funções da Biblioteca PS3BT



void setup() {
  Esc30A.attach(pino_motorA); 
  Esc30B.attach(pino_motorB); 
  Esc30C.attach(pino_motorC); 
  Esc30D.attach(pino_motorD); 
   
  delay(3000);
}
void loop() 
{
    // Faz a leitura do Botão R2 Analógico que vai de 0 a 255 e envia para a variável PinoFrente
    //analogWrite(Speed, PS3.getAnalogButton(R2_ANALOG));
    Speed = analogRead(pino_pot);                         // Le o valor do potenciometro
    Speed = map(Speed, 0, 1023, 0, 179);                  // Converte o valor para uma faixa entre 0 e 179
    Esc30A.write(Speed);
    Esc30B.write(Speed);
    Esc30C.write(Speed);
    Esc30D.write(Speed);
  
 

}
