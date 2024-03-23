#include <stdio.h>

void main()
{
    int n;
    int ant;
    int suc;
    
    printf("Digite um número: ");
    scanf("%d",&n);
    ant = n - 1;
    suc = n + 1;
    printf("Antecessor: %d\n",ant);
    printf("Sucessor: %d\n",suc);
}
