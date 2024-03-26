#include <stdio.h>
#include <math.h>

int main(){
    float lar, alt, area;
    printf("Digite a largura de um retângulo: ");
    scanf("%f",&lar);
    printf("Digite a altura do retângulo: ");
    scanf("%f",&alt);
    area = lar * alt;
    printf("Sua área é de %.2f",area);
    return 0;
}