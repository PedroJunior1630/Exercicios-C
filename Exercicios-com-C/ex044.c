#include <stdio.h>

int main(){
  printf("NÚMEROS PARES ENTRE 1 E 50\n");
  for(int c = 1; c<=50; c++){
    if(c % 2 == 0){
      printf("%d > ",c);
    }
  }
  printf("FIM");
  return 0;
}