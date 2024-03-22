#include <stdio.h>

void main(){
    float real;
    float dolar;
    
    printf("Digite um valor em R$: ");
    scanf("%f",&real);
    
    dolar = real * 5;
    
    printf("R$%.2f equivale a US$%.2f",real,dolar);
}