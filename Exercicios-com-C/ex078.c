#include<stdio.h>
#include <string.h>


int main()
{
    int numeros[10];
    int maior;
    for(int c = 0; c < 10; c++){
        printf("Digite o %d° elemento: ",c+1);
        scanf("%d",&numeros[c]);
    }
    printf("O maior elemento desta lista é o número: ");
    for(int c = 0; c < 10; c++){
        if(c == 0){
            maior = numeros[c];
        }else{
            if(numeros[c] > maior){
                maior = numeros[c];
            }
        }
    }
    printf("%d",maior);
    return 0;
}
