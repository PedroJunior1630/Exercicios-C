#include <stdio.h>

int main(){
  int somatot, qntd;
  
  for(int c = 1; c <= 500; c++){
    if(c % 2 == 1){
      if(c % 3 == 0){
         somatot += c;
         qntd += 1;
      }
    }
  }
  printf("A soma total entre os %d números impáres multiplos de três é igual a %d\n",qntd, somatot);
}