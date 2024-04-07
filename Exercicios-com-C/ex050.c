#include <stdio.h> 

int main(){
  int somatot = 0, qntd = 0,num;
  for(int c = 1; c <= 6; c++){
    printf("Digite o %d° número: ",c);
    scanf("%d",&num);
    if(num % 2 == 0){
      somatot += num;
      qntd += 1;
    }
  }
  printf("Você digitou %d números pares e a soma entre eles é %d",qntd,somatot);
  return 0;
}