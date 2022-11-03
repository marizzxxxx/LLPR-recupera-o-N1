#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
	
  printf("Fuso Horário.\nFaça um aplicativo que, dada a hora de saída, tempo de viagem e o fuso do destino com relação à origem, informe a hora de chegada de cada vôo no destino.");

  int saida, tempodevoo, fuso;

  printf("\n\nInforme hora de saída:\n");
  scanf("%d", &saida);
  printf("\n\nInforme o tempo de viagme:\n");
  scanf("%d", &tempodevoo);
  printf("\n\nInforme o fuso do destino com relação à origem:\n");
  scanf("%d", &fuso);

  if (saida == 0) {
    saida = 24;
  }

  saida = ((saida + tempodevoo + fuso) % 24);

  printf("\nA hora de chegada de cada vôo no destino deve ser ás: %d horas!\n",saida);

	return 0;
}
