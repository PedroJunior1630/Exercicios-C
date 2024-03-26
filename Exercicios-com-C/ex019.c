#include <stdio.h>

int main(){
    int numero;
    int n1;
    int n2;
    printf("Digite o 1° número: ");
    scanf("%d",&n1);
    printf("Digite o 2° número: ");
    scanf("%d",&n2);
    
    numero = n1;
    n1 = n2;
    n2 = numero;
    
    printf("1° Número virou: %d\n",n1);
    printf("2° Número virou: %d",n2);
    return 0;
}