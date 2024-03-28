#include <stdio.h>

int main(){
    int i, num;
    int maior = 0;
    int lista[100];
    printf("Insira números dos elementos(1 a 100): ");
    scanf("%d",&num);
    for(i = 0 ; i < num; i++){
        printf("Insira o número do elemento %d: ",i+1);
        scanf("%d",&lista[i]);
    }
    for(i = 1; i < num; i++){
        if(lista[i] > maior){
            maior =  lista[i];
        }
    }
    printf("Maior número na lista: %d",maior);
    return 0;
}