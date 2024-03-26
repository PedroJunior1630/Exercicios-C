#include <stdio.h>
#include <math.h>
int main(){
    double num, raiz;
    printf("Digite um número: ");
    scanf("%lf",&num);
    raiz = sqrt(num);
    printf("A raiz quadrada é: %.2f",raiz);
    return 0;
}