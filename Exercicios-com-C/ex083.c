#include <stdio.h>

/*Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 10 posições, */

int main(){
    int vetor[9];
    for(int c = 0; c < 10; c++){
        if(c % 2 == 0){
            vetor[c] = 5;
        }else{
            vetor[c] = 3;
        }
        printf("|  %d  |",vetor[c]);
    }
    printf("\n");
    for(int c = 0; c < 10; c++){
        printf("   %d   ",c);
    }
    return 0;
}
