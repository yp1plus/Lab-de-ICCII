// Done by Vinicius Silva Fernandes Kuhlmann

// Como o programa usa scanf e printf, ele precisa da biblioteca stdio.h
#include <stdio.h>

// A funcao abaixo retorna um valor inteiro, que e o resultado do fatorial duplo do valor inteiro n.
int fat_d(int n) {
	// Se n for par, a funcao tranforma o valor em impar.
    if (!n%2)
        n--;
	// Se n for igual a 1, a funcao retorna 1 sem fazer nada.
    if (n==1)
        return 1;
	// // Se n nao for igual a 1, a funcao retorna n * fat_d(n-2). Como a funcao e recursiva, fat_d(n-2) = (n-2) * fat_d(n-4), e assim por diante, ate que n seja 1.
    return n * fat_d(n-2);
}

int main() {
	// Declarando um valor inteiro n.
    int n;
	// Lendo um valor na tela e atribuindo-o ao valor inteiro n.
    scanf("%d", &n);
	// O printf abaixo escreve na tela o resultado da funcao fat_d(), cujo funcionamento esta descrito acima.
    printf("%d\n", fat_d(n));
	// Como a funcao main(void) foi executada sem erros, ela retorna 0.
    return 0;
}
