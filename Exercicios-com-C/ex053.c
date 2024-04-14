#include <stdio.h>
#include<string.h>

int main(){
  char sexo[10];
  printf("================================\n");
  printf("Digite o sexo: [M/F]: ");
  scanf("%s", sexo);
  while(strcmp(sexo, "M") != 0 && strcmp(sexo, "F") !=0){
    printf("OPÇÃO INVALÍDA!");
    printf("Digite o sexo: [M/F]: ");
    scanf("%s", sexo);
  }
  return 0;
}