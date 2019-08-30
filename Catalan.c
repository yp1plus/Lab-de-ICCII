// Done by Vinicius Silva Fernandes Kuhlmann

// Como o programa usa scanf e printf, ele precisa da biblioteca stdio.h
#include <stdio.h>

// A funcao abaixo retorna um valor inteiro, calculado com base na funcao dos numeros de catalan aplicada ao valor inteiro n.
int catalan(int n) {
	// Se n for igual a 0, a funcao retorna 1 sem fazer nada.
    if (n == 0)
        return 1;
	// Se n nao for igual a 0, a funcao retorna ( (4*n - 2) * catalan(n-1) / (n+1) ). Como a funcao e recursiva, catalan(n-1) = ( (4*(n-1) - 2) * catalan(n-2) / (n) ), e assim por diante, ate que n seja 0.
    return ( (4*n - 2) * catalan(n-1) / (n+1) );
}

int main(void) {
	// Declarando um valor inteiro n.
    int n;
	// Lendo um valor na tela e atribuindo-o ao valor inteiro n.
    scanf("%d", &n);
	// O printf abaixo escreve na tela o resultado da funcao catalan, cujo funcionamento esta descrito acima.
    printf("%d\n", catalan(n));
	// Como a funcao main(void) foi executada sem erros, ela retorna 0.
    return 0;
}
