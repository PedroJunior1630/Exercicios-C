#include <stdio.h>

int main(){
    int idade;
    int ano = 2024;
    int nasc;
    
    printf("Digite o ano de nascimento: ");
    scanf("%d",&nasc);
    
    idade = ano - nasc;
    
    printf("Idade: %d",idade);
    
    return 0;
}