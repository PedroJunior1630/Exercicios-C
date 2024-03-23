#include <stdio.h>
#include <math.h>

int main(){
    float num;
    printf("Digite um número real: ");
    scanf("%f",&num);
    printf("O número %.4f tem como sua porção inteira %.0f",num,trunc(num));
    return 0;
}
