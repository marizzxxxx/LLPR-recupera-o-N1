#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
	
  printf("Fuso Hor�rio.\nFa�a um aplicativo que, dada a hora de sa�da, tempo de viagem e o fuso do destino com rela��o � origem, informe a hora de chegada de cada v�o no destino.");

  int saida, tempodevoo, fuso;

  printf("\n\nInforme hora de sa�da:\n");
  scanf("%d", &saida);
  printf("\n\nInforme o tempo de viagme:\n");
  scanf("%d", &tempodevoo);
  printf("\n\nInforme o fuso do destino com rela��o � origem:\n");
  scanf("%d", &fuso);

  if (saida == 0) {
    saida = 24;
  }

  saida = ((saida + tempodevoo + fuso) % 24);

  printf("\nA hora de chegada de cada v�o no destino deve ser �s: %d horas!\n",saida);

	return 0;
}
