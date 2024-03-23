#include <stdio.h>

int main(){
    float sal;
    float aum;
    printf("Digite um salário R$: ");
    scanf("%f",&sal);
    aum = sal + (sal * 15 / 100);
    printf("Com aumento de 15 por cento o salário será de R$%.2f",aum);
    return 0;
}