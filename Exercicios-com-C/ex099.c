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
    printf("1° Técnica: Intangibilidade(Mugen)\n");
    printf("2° Técnica: Seis olhos(Rikugan)\n");
    printf("3° Técnica: Azul(amplificação do fetiço)\n");
    printf("4° Téncica: Vermelho(Reversão do fetiço dentro do mugen)\n");
    printf("5° Técnica: Vazio Roxo(Azul+Vermelho)\n");
    printf("Observe seu adversário Ryohmen Sukuna... Veja sobre: \n");
    cabecalho("SUKUNA");

    return 0;
}
