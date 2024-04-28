#include<stdio.h>
#include <string.h>

int fatorial(int n){
    int fat = 1;
    for(int c =1; c <= n; c++){
        fat *= c;
    }
    return fat;
}

int main()
{
    printf("=======================================\n");
    printf("Arranjo Simples - Elementos\n");
    printf("=======================================\n");
    int n, p, anp;
    
    printf("Digite o total de elementos: ");
    scanf("%d",&n);
    printf("Digite o número de elementos ordenados: ");
    scanf("%d",&p);
    anp =  fatorial(n) / fatorial(n-p);
    printf("O arranjo simples é A%d,%d = %d",n,p,anp);
    
    return 0;
}
