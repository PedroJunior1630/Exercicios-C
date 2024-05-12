#include <stdio.h>
#include <time.h>
/*Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um 
número (chave) e seu programa deve mostrar em que posições essa chave foi 
encontrada. Mostre também quantas vezes a chave foi sorteada*/

int main(){
    int vetor[30];
    int pos[30];
    int sortear, nchave;
    int qntd = 0;
    int i = 1;
    srand(time(NULL));
    for(int c = 1; c <= 30;c++){
        sortear = rand() % 15 + 1;
        vetor[c] = sortear;
    }     
    printf("Digite um número chave(1-15): ");
    scanf("%d",&nchave);
    printf("Encontrando o número chave nas posições....");
    for(int c = 1; c<=30; c++){
        if(nchave == vetor[c]){
            qntd += 1;
            pos[i] = c;
            printf("| %d | ",pos[i]);
            i += 1;
        }
    }
    printf("O número chave %d apareceu %d vezes",nchave, qntd);
    return 0;
}
