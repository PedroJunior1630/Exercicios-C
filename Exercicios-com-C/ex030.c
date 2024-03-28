#include <stdio.h>

int main(){
    int km;
    float preco;
    printf("VIAGENS ÁREAS\n");
    printf("200KM OU MENOS = R$0,50 por KM\n");
    printf("ACIMA DE 200KM = R$0,45 por KM\n");
    printf("Digite quantos km você vai viajar: ");
    scanf("%d", &km);
    if(km <= 200){
        preco =  km * 0.50;
    }else{
        preco =  km * 0.45;
    }
    printf("O preço da sua viagem de %dkm custará R$%.2f",km,preco);
    return 0;
}