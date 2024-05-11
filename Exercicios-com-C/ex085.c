#include <stdio.h>

/*Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No 
final, mostre uma listagem com todos os nomes informados, na ordem inversa 
daquela em que eles foram informados.*/

int main(){
    char vetor[7][32];
    for(int c = 0; c <= 7; c++){
        printf("Digite o %d° nome: ",c+1);
        scanf("%s",vetor[c]);
    }
    printf("\nA ordem inversa registrada foi: \n");
    for(int c = 7; c >= 0; c--){
        printf("%d - %s\n",c+1,vetor[c]);
    }
    return 0;
}
