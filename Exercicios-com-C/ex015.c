#include <stdio.h>
#include <math.h>

int main(){
    float co;
    float ca;
    float hip;
    
    printf("Digite o valor do cateto oposto: ");
    scanf("%f",&co);
    
    printf("Digite o valor do cateto adjacente: ");
    scanf("%f",&ca);
    
    hip = hypot(co,ca);
    
    printf("A hipotenusa vale %.2f",hip);
    
    return 0;
}