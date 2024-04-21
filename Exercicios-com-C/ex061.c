
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int fatorial(int num){
    int fat = 1, c=1;
    while(c <= num){
        fat *= c;
        c++;
    }
    return fat;
}

int main()
{
    printf("=========================\n");
    printf("ARRANJO SIMPLES\n");
    printf("=========================\n");
    int a, n, p;
    
    printf("Digite n elementos: ");
    scanf("%d",&n);
    
    printf("Digite o p dos elementos: ");
    scanf("%d",&p);
    
    a = fatorial(n) / fatorial((n-p));
    
    printf("O arranjo simples de A%d,%d é igual a %d",n,p,a);
    
}
