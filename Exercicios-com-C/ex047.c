#include <stdio.h> 

int main(){
  int n;
  printf("Digite um número inteiro:");
  scanf("%d", &n);
  if(n % 1 == 0 && n % n == 0){
    printf("O número é primo");
  }
  return 0;
}