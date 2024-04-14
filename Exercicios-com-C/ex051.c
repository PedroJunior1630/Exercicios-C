#include <stdio.h>

int main(){
  float maiorpeso, menorpeso, peso;
  for(int i = 1; i<=5; i++){
    printf("Digite o %d° peso: ",i);
    scanf("%f",&peso);
    if(i == 0){
      maiorpeso = peso;
      menorpeso = peso;
    }else{
      if(peso > maiorpeso){
        maiorpeso = peso;
      }
      if(peso < menorpeso){
        menorpeso = peso;
      }
    }
  }
  printf("Maior peso registrado: %.2f\n",maiorpeso);
  printf("Menor peso registrado: %.2f\n",menorpeso);
  
  return 0;
}