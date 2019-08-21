//By Yure Pablo em Agosto de 2019
//Programa para manipular consumo de energia numa cidade
#include <stdio.h>

int main(void){
    int num_habitantes;
    float valor_kwh;
    float sum_total = 0;
    int sum[3] = {0};
    float maior, menor;

    printf("Determine o número de habitantes da cidade: ");
    scanf("%d", &num_habitantes);

    printf("Determine o valor do kwh: ");
    scanf("%f", &valor_kwh);

    for (int i = 0; i < num_habitantes; i++)
    {
        int consumo, codigo;
        float valor;

        printf("Digite o consumo do mês (em kwh) do habitante %d: ", i+1);
        scanf("%d", &consumo);

        printf("Digite o código do consumidor [1 - Residencial, 2 - Comercial, 3 - Industrial]: ");
        scanf("%d", &codigo);

        valor = consumo*valor_kwh*codigo;

        if (i == 0)
        {
            maior = valor - 1;
            menor = valor + 1;
        }

        if (valor > maior)
        {
            maior = valor;
        }
        else if (valor < menor)
        {
            menor = valor;
        }

        sum_total += valor;

        switch(codigo)
        {
            case 1: sum[0] += consumo; break;
            case 2: sum[1] += consumo; break;
            case 3: sum[2] += consumo; break;
        }
    }

    printf("Maior valor de consumo: %.2f R$\n", maior);
    printf("Menor valor de consumo: %.2f R$\n", menor);
    printf("Média do consumo: %.2f R$\n", sum_total);
    for (int i = 0; i < 3; i++)
    {
        printf("Total de consumo da categoria %d: %d kwh\n", i+1, sum[i]);
    }
    
}