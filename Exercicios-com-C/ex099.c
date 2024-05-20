#include <stdio.h>
#include <string.h>
#include <time.h>

void linha(int tam){
    int c;
    while(c<=tam){
        printf("=");
        c++;
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
    cabecalho("JUJUTSU KAISEN : GAME");
    printf("Se prepare para a luta...\n")
    printf("Seu personagem é o SATORO GOJO... Veja sobre: \n");
    cabecalho("SATORO GOJO");
    printf("1° Técnica: Intangibilidade(\n");
    printf("2° Técnica: Seis olhos \n");
    printf("3° Técnica: Azul \n");
    printf("4° Técnica: Vermelho\n");
    printf("5° Técnica: Vazio Roxo \n");
    printf("6° Técnica: Vazio Imensurável\n");
    printf("7° Técnica: Domínio Simples: \n");
    printf("8° Técnica: Reversão do fetiço\n");
    linha(40);
    printf("Observe seu adversário Ryohmen Sukuna... Veja sobre: \n");
    cabecalho("SUKUNA");
    printf("1° Técnica: Corte Normal\n");
    printf("2° Técnica: Amplificação de domínio\n");
    printf("3° Técnica: Santuário Malevolente\n");
    printf("4° Técnica: Mahoraga\n");
    printf("5° Técnica: Agito\n");
    printf("6° Técnica: Desmantelar \n");
    printf("7° Técnica: Reversão do fetiço\n");
    linha(40);
    return 0;
}
