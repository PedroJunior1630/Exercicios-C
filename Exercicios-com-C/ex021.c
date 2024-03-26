#include <stdio.h>
#include <math.h>

int main(){
    float raio;
    float area;
    const float pi = 3.1415;
    printf("Digite o raio de um circulo em cm: ");
    scanf("%f",&raio);
    area = pi * pow(raio,2);
    printf("A área do circulo é: %.2fcm²",area);
    return 0;
}