#include <stdio.h> 

int main(){
  int num, fatorial = 1;
  
  printf("Digite um número: ");
  scanf("%d", &num);

  int c = num;
  
  while(c >= 1){
    fatorial *= c;
    c -=1;
  }
  printf("O fatorial deste número é: %d",fatorial);
  return 0;
}