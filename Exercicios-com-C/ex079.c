#include <stdio.h>

int main(){
    float r;
    float pi = 3.1415;
    float area;
    printf("Digite o raio de um circulo(m²): ");
    scanf("%f",&r);
    area = pi * r;
    printf("A área do circulo é aproximadamente %.4fπm²",area);
    return 0;
}
