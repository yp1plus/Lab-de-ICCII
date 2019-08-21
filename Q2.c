//By Yure Pablo em Agosto de 2019
//Verifica se uma data informada é válida ou não
#include <stdio.h>
#include <stdbool.h>

#define ANO_ATUAL 2008

struct Data{
    int dia;
    enum meses_ {JAN = 1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ} mes;
    int ano;
};

bool errorInData(struct Data data){
    if (data.dia <= 0) 
        return true;
    if (data.ano > ANO_ATUAL)
        return true;
    
    switch(data.mes)
    {
        case FEV: 
        {
            if ((data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0)) //Ano bissexto
            {
                if (data.dia > 29) 
                    return true;
            }
            else if (data.dia > 28) 
                return true;

            break;
        }
        case ABR: case JUN: case SET: case NOV:
        {
            if (data.dia > 30) return true;
            
            break;
        }
        case JAN: case MAR: case MAI: case JUL: case AGO: case OUT: case DEZ:
        {
            if (data.dia > 31) return true;

            break;
        }
        default: return true; break; //se o mes nao estiver entre 1 e 12, isto é, invalido
    }

    return false;
}

int main(void){
    struct Data data;

    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    if (errorInData(data))
        printf("data inválida\n");
    else
        printf("data válida\n");
    
    return 0;

}