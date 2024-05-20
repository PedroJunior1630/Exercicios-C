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
        if(tipo ==3){
            printf("-=-");
        }
        c++;
    }
    printf("\n");
}