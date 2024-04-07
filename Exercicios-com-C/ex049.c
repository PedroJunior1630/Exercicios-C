#include <stdio.h> 
#include <string.h>
int main(){
  int pessoa, qntdmaior = 0, qntdmenor = 0;
  for(int c = 1; c<= 7; c++){
    printf("Digite a idade da %d° pessoa: ", c);
    scanf("%d",&pessoa);
    if(pessoa < 18){
      qntdmenor += 1;
    }else{
      qntdmaior += 1;
    }
  }
  printf("Temos %d pessoas de maiores\n",qntdmaior);
  printf("Temos %d pessoas de menor", qntdmenor);
  return 0;
}