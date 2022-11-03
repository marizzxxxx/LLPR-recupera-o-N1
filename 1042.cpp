#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  int a, b, c;
  
  printf("Sort Simples.\nLeia 3 valores inteiros e ordene-os em ordem crescente.");

  printf("\n\nDigite o primeiro valor:\n");
  scanf("%d", &a);
  printf("\n\nDigite o segundo valor:\n");
  scanf("%d", &b);
  printf("\n\nDigite o terceiro valor:\n");
  scanf("%d", &c);

  printf("\nValores em ordem crescente:\n");
  
  if (a <= b && b <= c){
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
  }
  else{

    if (a <= c && c <= b){
      printf("%d\n", a);
      printf("%d\n", c);
      printf("%d\n", b);
    }
    else{

      if (b <= a && a <= c){
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
      }
      else{

        if (b <= c && c <= a){
          printf("%d\n", b);
          printf("%d\n", c);
          printf("%d\n", a);
        }
        else{

          if (c <= a && a <= b){
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
          }
          else{
            if (a == b && b == c){
              printf("%d\n", a);
              printf("%d\n", b);
              printf("%d\n", c);
            }
          }
        }
      }
    }

}
  printf("\nValores na sequência como foram lidos:\n");
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  
  return 0;
}
