#include <stdio.h> 
#include <math.h>

int main(){
  int n1, n2, opc;
  printf("Diigte o 1° número: ");
  scanf("%d",&n1);
  printf("Digite o 2° número: ");
  scanf("%d",&n2);
  printf("==================================\n");
  printf("[ 1 ] - SOMAR\n");
  printf("[ 2 ] - MULTIPLICAR\n");
  printf("[ 3 ] - MAIOR\n");
  printf("[ 4 ] - NOVOS NÚMEROS\n");
  printf("[ 5 ] - SAIR DO PROGRAMA\n");
  printf("==================================\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &opc);
  switch(opc){
    case 1:
      printf("%d + %d = %d", n2, n2, n1+n2);
      break;
    case 2:
      printf("%d * %d = %d", n2, n2, n1*n2);
      break;
    case 3:
      if(n1>n2){
        int maior = n1;
        printf("Maior: %d",maior);
        break;
      }
      if(n2>n1){
        int maior = n2;
        printf("Maior: %d",maior);
        break;
      }else{
        printf("Valores iguais.");
        break;
      }
    case 4:
      printf("Digite o 1° número: ");
      scanf("%d",&n1);
      printf("Digite o 2° número: ");
      scanf("%d",&n2);
      printf("==================================\n");
      printf("[ 1 ] - SOMAR\n");
      printf("[ 2 ] - MULTIPLICAR\n");
      printf("[ 3 ] - MAIOR\n");
      printf("[ 4 ] - NOVOS NÚMEROS\n");
      printf("[ 5 ] - SAIR DO PROGRAMA\n");
      printf("==================================\n");
      printf("Digite a opção desejada: ");
      scanf("%d", &opc);
    case 5:
      printf("Programa encerrado com sucesso!");
      break;
  }
  return 0;
}