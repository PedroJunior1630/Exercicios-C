#include <stdio.h>
#include <time.h>
#include <string.h>

void contador(int inicio,int fim,int passo){
    if(passo == 0){
        passo = 1;
    }
    if(inicio > fim){
        while(inicio >= fim){
            printf("%d > ",inicio);
            inicio -= passo;
        }
        printf("FIM\n");
    }else{
        while(inicio<= fim){
            printf("%d > ",inicio);
            inicio += passo;
        }
        printf("FIM\n");
    }
}

void linha(int tamanho){
    for(int c =1; c<= tamanho; c++){
        printf("=");
    }
    printf("\n");
}

void cabecalho(char msg[]){
    int tam;
    tam = strlen(msg) + 4;
    linha(tam);
    printf("  %s\n",msg);
    linha(tam);
}

int main(){
    int inicio, fim, passo;
    cabecalho("Personalize sua contagem");
    printf("Digite o inicio: ");
    scanf("%d",&inicio);
    printf("Digite o fim: ");
    scanf("%d",&fim);
    printf("Digite o passo: ");
    scanf("%d",&passo);

    contador(inicio, fim, passo);

    return 0;
}
