#include <stdio.h>
#include <locale.h>
 
 int main() {

setlocale(LC_ALL, "Portuguese_Brazil");

	double a, b, c, A, B, C;
	
	printf("Tipos de Triângulos.\nLeia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam.");
	
	printf("\n\nInforme o valor do Lado 1:\n");
	scanf("%lf", &a);
	printf("\nInforme o valor do Lado 2:\n");
	scanf("%lf", &b);
	printf("\nInforme o valor do Lado 3:\n");
	scanf("%lf", &c);

	if (a>=b && a>=c) {
		A = a;
		B = b;
		C = c;	
	} else if (b>=a && b>=c) {
		A = b;
		B = a;
		C = c;	
	} else {
		A = c;
		B = b;
		C = a;	
	}
	
    if (A>=B+C) {
    	printf("\nNÃO FORMA TRIÂNGULO\n");
	} else {
	if ((A*A)==(B*B)+(C*C)) {
    	printf("\nTRIÂNGULO RETANGULO\n");
	} else if ((A*A)>(B*B)+(C*C)) {
    	printf("\nTRIÂNGULO OBTUSANGULO\n");
	} else if((A*A)<(B*B)+(C*C)) {
    	printf("\nTRIÂNGULO ACUTANGULO\n");
	}
	if((A==B) && (B==C) && (C==A)) {
    	printf("\nTRIÂNGULO EQUILATERO\n");
	} else if ((A==B && A!=C)||(B==C && B!=A)||(C==A && C!=B)) {
    	printf("\nTRIÂNGULO ISOSCELES\n");
	}
	
	}
	
    return 0;
}
