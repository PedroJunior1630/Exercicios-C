#include <stdio.h>
/*
Escreva um programa que pergunte a quantidade de km percorridos por um carro alugado, e a quantidade de dias alugados
calcule o preço a pagar sabendo que o dia custa R$60,00 e cada km custa R$0,15
*/
int main(){
    float km;
    int dias;
    float tot;
    
    printf("Quantos km percorrido? ");
    scanf("%f",&km);
    printf("Quantos dias alugados? ");
    scanf("%d",&dias);
    
    tot = (km * 0.50) + (dias * 60);
    
    printf("O total ficou R$%.2f",tot);
    
    return 0;
}