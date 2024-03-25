#include <stdio.h>

int main(){
    char nome[20];
    int tam = 20;
    printf("Digite seu nome: ");
    fgets(nome, tam, stdin);
    printf("Prazer em te conhecer ");
    puts(nome);
    return 0;
}