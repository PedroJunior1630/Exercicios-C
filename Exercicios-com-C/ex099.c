#include <stdio.h>
#include <string.h>
#include <time.h>

void linha(int tam, int tipo){
    int c;
    while(c<=tam){
        if(tipo == 1){
            printf("=+=");
        }
        if(tipo == 2){
            printf("=-=");
        }
        if(tipo == 3){
            printf("-=-");
        }
        c++;
    }
    printf("\n");
}

void cabecalho(char palavra[]){
    linha(20, 3);
    printf("    %s",palavra);
    linha(20, 3);
}

int main(){
    linha(20,3);
    cabecalho("JUJUTSU KAISEN : GAME\n");
    personagens
    return 0;
}
