#include <stdio.h> 
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Tempo de jogo.\n");

    int inicio, fim, resultado;
    
    printf("Informe que horas o jogo teve seu início:\n");
    scanf("%d", &inicio);
    printf("Informe que horas o jogo teve seu termino:\n");
    scanf("%d", &fim);    
    
    if (inicio < fim){
    resultado = (fim - inicio);
    printf("O JOGO DUROU %d HORA(S)\n", resultado);
  }
    else{
    if (inicio == fim){
      printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
      resultado = (24 - inicio + fim);
      printf("O JOGO DUROU %d HORA(S)\n", resultado);
    }
  }

return 0;
}
