/* Aula 03 
 * 03.1 - Crie o projeto aula03, adicione o arquivo aula03.c e escreva o c�digo da estrutura b�sica
 */
#include "config.h"
//Vari�vel auxiliar
int AUX2;
void setup()
{
    //Todos os pinos do PORTD como sa�da
    TRISD = 0x00;
    //Desliga todos os pinos
    PORTD = 0;
    
    AUX2 = 0;
}

void loop()
{
    //leitura na borda de descida com bloqueio
    if (!digitalRead(_RB0)) {
        digitalWrite(_RD0, !digitalRead(_RD0));
        while (!digitalRead(_RB0));
    }
    //leitura na borda de descida sem bloqueio
    if (!digitalRead(_RB1)) {
        if (AUX2) {
            digitalWrite(_RD1, !digitalRead(_RD1));
            AUX2 = 0;
        }
    }
    else {
        AUX2 = 1;
    }
}