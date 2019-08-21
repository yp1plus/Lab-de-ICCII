//By Yure Pablo em Agosto de 2019
//Programa para converter unidade da velocidade (km/h para m/s e vice-versa)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FATOR_DE_CONVERSAO 3.6

int main(void){
    char value_velocidade[50] = {'-'};
    char *unidade_de_medida;

    while (strcmp(value_velocidade, "0")!=0)
    {   
        printf("Informe 0 para sair ou a velocidade com a unidade de medida desejada [km/h] ou [m/s] (Ex.: 2.3 km/h): ");
        scanf("%[^\n]s", value_velocidade);

        float velocidade = strtof(value_velocidade, &unidade_de_medida);

        if (strcmp(unidade_de_medida, " km/h") == 0)
            printf("A velocidade é %.2f m/s\n", velocidade / FATOR_DE_CONVERSAO);
        else if (strcmp(unidade_de_medida, " m/s") == 0)
            printf("A velocidade é %.2f km/h\n", velocidade * FATOR_DE_CONVERSAO);
        
        getchar();
    }

    return 0;
}

