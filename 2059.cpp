#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int P, J1, J2, R, A, ganha, soma;
    
    printf("Ímpar, Par ou Roubo.\nUm novo jogo chamado Ímpar, Par ou Roubo (IPR) está se tornando muito popular. Esse jogo surgiu quando alguns amigos estavam sem conexão com a internet, sem celular, sem computador e bastante desocupados.");
    
    printf("\n\nInforme a escolha do Jogador 1. \n1 = Par | 0 = Ímpar:\n");
    scanf("%d", &P);
    printf("\nInforme o valor escolhido pelo Jogador 1: \n");
    scanf("%d", &J1);
    printf("\nInforme o valor escolhido pelo Jogador 2: \n");
    scanf("%d", &J2);
    printf("\nInforme se o Jogador 1 roubou. \n1 = Roubou | 0 = Não Roubou:\n");
    scanf("%d", &R);
    printf("\nInforme se o Jogador 2 acusou o roubo. \n1 = Acusou | 0 = Não Acusou:\n");
    scanf("%d", &A);
    
    soma = J1 + J2;
    
    if ((ganha%2==1 && P==0)&&(P==1 && soma%2==0)){
    	ganha=1;
    	
	} else if ((soma%2==0 && P==0)||(P==1 && soma%2==1)){
		ganha=2;
	}
    if (A==1 && R==1){
		ganha=2;
		
	} else if (R==1 && A==0){
    	ganha=1;
	}
	
	
    printf("\nJogador %d ganha!\n", ganha);
    
    
    return 0;
}
