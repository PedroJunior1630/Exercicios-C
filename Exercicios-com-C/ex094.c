#include <stdio.h>
#include <time.h>


void sorteia(int num[]){
    srand(time(NULL));
    printf("Os números sorteados foram: ");
    for(int c =1;c<=5; c++){
        num[c] = rand() % 10;
        printf("| %d | ",num[c]);
    }
}

void somaPar(int num[]){
    int soma = 0;
    for(int c =1; c<=5;c++){
        if(num[c] % 2 == 0){
            soma += num[c];
        }
    }
    printf("\nA soma dos números pares nesta lista é igual a %d",soma);
}

int main(){
    int numeros[5];
    sorteia(numeros);
    somaPar(numeros);
    return 0;
}
