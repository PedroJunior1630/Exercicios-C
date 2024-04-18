#include <stdio.h> 

int main(){
  int num, fatorial = 1;
  
  printf("Digite um número: ");
  scanf("%d", &num);

  int c = num;
  
  while(c >= 1){
    printf("%d",c);
    if(c > 1){
      printf(" x ");
    }else{
      printf(" = ");
    }
    fatorial *= c;
    c -=1;
  }
  printf("%d\n",fatorial);
  return 0;
}