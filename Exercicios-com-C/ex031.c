#include <stdio.h>

int main(){
    int ano;
    printf("ANO BISSEXTO OU NÃO?\n");
    printf("Digite o ano atual?");
    scanf("%d",&ano);
    printf("Este ano é ");
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("BISSEXTO");
    }else{
        printf("NÃO BISSEXTO");
    }
    return 0;
}