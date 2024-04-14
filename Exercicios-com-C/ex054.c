#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
  int computador, jogador, cont =  1;
  srand(time(NULL));
  computador = rand() % 10 + 1;
  printf("O computador pensou em um número entre 1 e 10, tente adivinhar!\n");
  printf("Digite um número: ");
  scanf("%d",&jogador);
  while(jogador != computador){
    cont += 1;
    printf("ERROU! Tente novamente: ");  
    scanf("%d",&jogador);
  }
  printf("PARABÉNS! Você acertou em %d tentativas",cont);
  return 0;
}