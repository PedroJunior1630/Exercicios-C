/* Desafio : somar dois números */

#include <stdio.h>

void main()
{
    int n1;
    int n2;
    int soma;
    
    printf("Digite o 1° número: ");
    scanf("%d",&n1);
    printf("Digite o 2° número: ");
    scanf("%d",&n2);
    soma = n1 + n2;
    printf("%d + %d = %d",n1, n2, soma);
}
