
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int n, som = 0, qntd = 0;
    while(n != 999){
        printf("Digite um número inteiro(999 para parar): ");
        scanf("%d",&n);
        if(n == 999){
            break;
        }
        som += n;
        qntd ++;
    }
    printf("Você digitou %d números e a soma total foi %d",qntd, som);
    return 0;
}
