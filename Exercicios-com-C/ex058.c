#include <stdio.h>  

int main(){
  int c=1, n1,r,nt;

  printf("Digite o primeiro termo: ");
  scanf("%d",&n1);

  printf("Digite a razão: ");
  scanf("%d",&r);
  
  nt = n1;
  while(c<=10){
    printf("%d > ",nt);
    nt += r;
    c ++;
  }
  printf("FIM");
  return 0;
}