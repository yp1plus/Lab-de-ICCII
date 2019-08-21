//By Yure Pablo em Agosto de 2019
//Algoritmo de ordenação das pessoas por idade
#include <stdio.h>
#include <string.h>

struct pessoa_{
    int idade[10];
    char nome[10][100];
};

int main(void){
    struct pessoa_ pessoa;
    int i,j, indice_fim;

    for (i = 0; i < 10; i++)
    {
        scanf("%d %s", &pessoa.idade[i], pessoa.nome[i]);

        if (pessoa.idade[i] < 0)
        {
            indice_fim = i;
            break;
        }

        getchar();
           
    }

    for (i = 0; i < indice_fim; i++)
    {
        for (j = i + 1; j < indice_fim; j++)
        {
            if (pessoa.idade[i] > pessoa.idade[j])
            {
                int aux = pessoa.idade[j];
                char aux_nome[100];
                strcpy(aux_nome, pessoa.nome[j]);
                pessoa.idade[j] = pessoa.idade[i];
                strcpy(pessoa.nome[j], pessoa.nome[i]);
                pessoa.idade[i] = aux;
                strcpy(pessoa.nome[i], aux_nome);
            }
        }
    }
    for (i = 0; i < indice_fim; i++)
    {
        printf("Nome: %s \t Idade: %d\n", pessoa.nome[i], pessoa.idade[i]);
    }

    return 0;

    
}