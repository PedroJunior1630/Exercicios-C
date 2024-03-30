#include <stdio.h>

int main(){
    int ano = 2024, idade, nasc;
    printf("ALISTAMENTO\n");
    printf("Digite o ano de nascimento: ");
    scanf("%d",&nasc);
    idade = ano - nasc;
    if(idade == 18){
        printf("Você tem %d anos de idade, hora de se alistar.",idade);
    }
    if(idade < 18){
        printf("Você tem %d anos de idade, faltam %d anos para se alistar que será em %d.",idade,(nasc+18) - ano, nasc+18);
    }
    if(idade > 18){
        printf("Você tem %d anos de idade, era para ter se alistado há %d anos atrás, em %d.",idade, ano - (nasc+18), nasc+18);
    }
    return 0;
}