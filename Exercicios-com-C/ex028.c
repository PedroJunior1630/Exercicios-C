#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num_ale,num;
    srand(time(NULL));
    num_ale =  rand() % 6;
    printf("VAMOS JOGAR UM JOGO DA ADIVINHAÇÃO\n");
    printf("Estou pensando um número entre 0 e 5, tente adivinhar!");
    scanf("%d",&num);
    printf("Eu pensei no número %d e você digitou %d...",num_ale,num);
    if(num == num_ale){
        printf("VOCÊ VENCEU!");
    }else{
        printf("VOCÊ PERDEU!");
    }
    return 0;
}