#include <stdio.h>

void main(){
    float l;
    float a;
    float ar;
    float t;
    
    printf("Digite a largura: ");
    scanf("%f",&l);
    printf("Digite a altura: ");
    scanf("%f",&a);
    
    ar = l * a;
    
    t =  ar / 2;
    
    printf("%.2fx%.2fm² sua área tem %.2fm², para pintar será necessário %.2f litros de tinta.",l,a,ar,t);
    
}