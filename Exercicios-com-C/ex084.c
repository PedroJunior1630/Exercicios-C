#include <stdio.h>

/* Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 15 posições com os primeiros 
elementos da sequência de Fibonacci:*/

int main(){
    int vetor[15];
    int f1 = 1;
    int f2 = 1;
    int f3;
    vetor[0] = f1;
    vetor[1] = f2;
    printf("0 - |  %d  |\n1 - |  %d  |\n",vetor[0],vetor[1]);
    for(int c = 2; c < 16; c++){
        f3 = f1 + f2;
        vetor[c] = f3;
        f1 = f2;
        f2 = f3;
        printf("%d - |  %d  |\n",c,vetor[c]);
    }
    return 0;
}
