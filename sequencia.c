//Done by AndreSFND
#include <stdio.h>

//Funcao recursiva que calcula a sequencia
int Funcao(int n){

    //Se n for 1 ou 2, a função retorna n, se não retorna [2 * F(n-1) + 3 * F(n - 2)]
    if(n == 1 || n == 2)
        return n;
    else
        return (2*Funcao(n-1)) + (3*Funcao(n-2)); 

}

int main(){

    //Declara e atribui valores às variaveis
    int n, resultado;

    scanf("%d", &n);
    resultado = Funcao(n);

    //Imprime o resultado
    printf("%d\n", resultado);

    return 0;

}