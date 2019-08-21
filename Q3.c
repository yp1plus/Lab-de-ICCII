//By Yure Ṕablo em Agosto de 2019
//Joguinho de somar números inteiros menores do que 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANT_NUMS 99
#define QUANT_PERGUNTAS 5

struct gabarito_{
    int a[QUANT_PERGUNTAS];
    int b[QUANT_PERGUNTAS];
    int ans[QUANT_PERGUNTAS];
    int quant_acertos;
};

void imprimirGabarito(struct gabarito_ gabarito){
    for (int i = 0; i < QUANT_PERGUNTAS; i++)
    {
        printf("\n%d. Qual é a soma de %d + %d?:\n", i+1, gabarito.a[i], gabarito.b[i]);
        printf("Resposta Correta = %d\n", gabarito.ans[i]);
    }

    printf("\nVocê acertou %d perguntas!\n", gabarito.quant_acertos);
}

int main(void){
    int a, b;
    int ans; //resposta
    struct gabarito_ gabarito;
    gabarito.quant_acertos = 0;


    srand(time(NULL)); //A cada execução a semente será diferente

    for (int i = 0; i < QUANT_PERGUNTAS; i++)
    {
        a = rand() % QUANT_NUMS;
        b = rand() % QUANT_NUMS;

        gabarito.a[i] = a;
        gabarito.b[i] = b;
        gabarito.ans[i] = a + b;

        printf("%d.Qual é a soma de %d + %d? ", i+1, a, b);

        scanf("%d", &ans);

        if (ans == a + b)
            gabarito.quant_acertos++;
        
    }

    imprimirGabarito(gabarito);

    return 0;
}