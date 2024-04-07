#include <stdio.h> 
#include <string.h>
int main(){
  char palavra[32];
  char palindromo[32];
  int tamanho,i;
  printf("Digite uma palavra: ");
  scanf("%s",&palavra);
  tamanho = strlen(palavra);
  i = 0;
  for(int c = tamanho; c >=0; c--){
    palindromo[i] = palavra[c-1];
    i += 1;
  }
  if(strcmp(palavra, palindromo) == 0){
    printf("A palavra %s é palindromo",palavra);
  }else{
    printf("A palavra não é um palindromo");
  }
  return 0;
}