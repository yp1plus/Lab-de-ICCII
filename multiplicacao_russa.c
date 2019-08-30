//Programa que faz multiplicação à russa de 2 entradas
//Done by Yure Pablo em Agosto de 2019

#include <stdio.h>

void multiplicar_a_russa(int A, int B, int *sum){
/*Função recursiva que printa o passo a passo e a guarda o resultado da multiplicação à russa*/
    if (A < 1) return; //Caso base da recursão, encerra a função
    if (A % 2 != 0)
    {
        printf("%d\t%d\t%d\n", A, B, B); 
        *sum += B;
    }
    else
        printf("%d\t%d\t-\n", A, B);
    
    multiplicar_a_russa(A/2, B*2, sum); //chamada recursiva
}

int main(){
    int A, B, sum = 0;

    scanf("%d %d", &A, &B);

    printf("A\tB\tParcelas\n");

    multiplicar_a_russa(A, B, &sum);

    printf("Soma = %d\n", sum);

    return 0;
}