#include <stdio.h>
#include <string.h>


void linha(int tamanho){
    for(int c = 1; c<=tamanho;c++){
        printf("=");
    }
    printf("\n");
}

void ConsoleWriteLine(char msg[]){
    int tam;
    tam = strlen(msg) + 4;
    linha(tam);
    printf("  %s\n",msg);
    linha(tam);
}
int main(){
    ConsoleWriteLine("Olá, Mundo!");
    return 0;
}
