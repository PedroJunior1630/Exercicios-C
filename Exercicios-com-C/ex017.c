#include <stdio.h>
#include <math.h>

int main(){
    float ang;
    float cosseno;
    float seno;
    float tangente;
    float pi = 3.14159;
    float rad;
    printf("Digite um ângulo qualquer: ");
    scanf("%f",&ang);
    rad = ang * pi / 180;
    cosseno = cos(rad);
    seno = sin(rad);
    tangente = tan(rad);
    printf("Cosseno: %.2f\n",cosseno);
    printf("Seno: %.2f\n",seno);
    printf("Tangente: %.2f\n",tangente);
    return 0;
}