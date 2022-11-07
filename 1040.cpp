#include <stdio.h>
#include <locale.h>
 
int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float N1, N2, N3, N4, E, media, MF;
    
    printf("Média 3.\nLeia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente.");
    
    printf("\n\nInforme a Nota 1:\n");
    scanf("%f", &N1);
    printf("\nInforme a Nota 2:\n");
    scanf("%f", &N2);
    printf("\nInforme a Nota 3:\n");
    scanf("%f", &N3);
    printf("\nInforme a Nota 4:\n");
    scanf("%f", &N4);
    
    media = ((2*N1)+(3*N2)+(4*N3)+(1*N4))/10;
    
	printf("\nA Média é igual a: %.1f\n", media);
    
	if (media>=7.0) {
        printf("\nAluno aprovado.\n");
    } else if (media<5.0) {
        printf("\nAluno reprovado.\n");
    }
	if (media>=5.0 && media<=6.9) {
        printf("\nAluno em exame.\n");
        printf("\nInforme a Nota do Exame: ");
        scanf("%f", &E);
        printf("\nNota do exame: %.1f\n", E);
        MF = (media + E)/2;
    if (MF>=5.0) {
        printf("\nAluno aprovado.\n");
        printf("\nMedia final: %.1f\n", MF);
    } else {
        printf("\nAluno reprovado.\n");
        printf("\nMedia final: %.1f\n", MF);
    }
    }
    
    return 0;
}
