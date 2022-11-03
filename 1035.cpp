#include <stdio.h>
#include <locale.h>
 
int main() { 
	setlocale(LC_ALL, "Portuguese_Brazil");
    int a, b, c, d;

	printf("Teste de Seleção 1.\nLeia 4 valores inteiros A, B, C e D.");

	printf("\n\nDigite o primeiro valor inteiro:\n");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", &b);
    printf("Digite o terceiro valor inteiro:\n");
    scanf("%d", &c);
    printf("Digite o quarto valor inteiro:\n");
    scanf("%d", &d);

	if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0 )
    printf("Valores aceitos\n");
	else
    printf("Valores nao aceitos\n");

    return 0;
}


  
