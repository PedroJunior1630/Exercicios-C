#include <stdio.h>
#include <string.h>
int main(){
  float media;
  int idade, idadetotal = 0, idadehom, qntdmu = 0;
  char nome[32], nomehom[32];
  char sexo[1];
  for(int i =1; i<=4; i++){
    printf("==========================================\n");
    printf("CADASTRO DA %d° PESSOA: \n", i);
    printf("==========================================\n");
    printf("Nome: ");
    scanf("%s",nome);
    printf("Idade: ");
    scanf("%d",&idade);
    printf("Sexo[M/F]: ");
    scanf("%s",sexo);
    if(strcmp(sexo, "M") == 0){
      if(i == 1){
        idadehom = idade;
      }else{
        if(idade > idadehom){
          idadehom = idade;
        }
      }
    }
    if(strcmp(sexo, "F") == 0){
      if(idade < 20){
        qntdmu += 1;
      }
    }
    idadetotal += idade; 
  }
  media = idadetotal / 4;
  printf("==========================================\n");
  printf("A média de idade deste grupo: %.2f\n",media);
  printf("O homen mais velho tem %d anos\n",idadehom);
  printf("Temos %d mulheres com menos de 20 anos\n", qntdmu);
  return 0;
}