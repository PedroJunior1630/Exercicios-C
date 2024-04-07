#include <stdio.h> 

int main(){
  int ptermo, razao, termos;
  printf("Digite o primeiro termo de uma PA: ");
  scanf("%d", &ptermo);
  printf("Digite a razão dessa PA: ");
  scanf("%d", &razao);
  termos = ptermo;
  for(int c = 1; c <= 10; c++){
    printf("%d > ",termos);
    termos += razao;
  }
  printf("FIM");
  return 0;
}