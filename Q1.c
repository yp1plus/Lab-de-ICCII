//By Yure Pablo em Agosto de 2019
//Calcula quanto ganhadores de uma loteria devem receber
#include <stdio.h>

#define QUANTIA_TOTAL 900000.00 //Quantia de 900 mil que será dividida entre três ganhadores 
#define PORCENT_TOTAL 1
#define TOTAL_GANHADORES 3

const float porcent_ganhador[TOTAL_GANHADORES] = {0.46, 0.32, PORCENT_TOTAL - (0.46 + 0.32)};

int main(void){
    
    for (int i = 0; i < TOTAL_GANHADORES; i++)
    {
        printf("O ganhador %d recebe %f R$\n", i+1, porcent_ganhador[i] * QUANTIA_TOTAL);
    }

    return 0;
}