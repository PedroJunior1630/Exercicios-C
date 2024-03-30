#include <stdio.h>

int main(){
    int ano = 2024, idade, nasc;
    printf("CATEGORIA DE NATAÇÃO\n");
    printf("Digite o ano de nascimento: ");
    scanf("%d",&nasc);
    idade = ano - nasc;
    printf("VOCÊ TEM %d ANOS DE IDADE E SUA CATEGORIA: ",idade);
    if(idade <= 9){
        printf("MIRIM");
    }
    if(idade > 9 && idade <= 14){
        printf("INFANTIL");
    }
    if(idade > 14 && idade <= 19){
        printf("JUNIOR");
    }
    if(idade == 20){
        printf("SENIOR");
    }
    if(idade > 20){
        printf("MASTER");
    }
    return 0;
}