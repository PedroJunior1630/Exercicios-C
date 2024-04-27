#include <stdio.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int numeros[5] = {rand() % 11, rand() % 11, rand() % 11, rand() % 11, rand() % 11};
    int maior, menor;
    printf("Os números sorteados foram: ");
    for(int c = 0; c < 5; c++){
        printf("%d | ",numeros[c]);
    }
    printf("\nMaior número: ");
    for(int c = 0; c < 5; c++){
        if(c == 0){
            maior = numeros[c];
        }
        else{
            if(numeros[c] > maior){
                maior = numeros[c];
            }
        }
    }
    printf("%d",maior);
    printf("\nMenor número: ");
    for(int c = 0; c < 5; c++){
        if(c == 0){
            menor = numeros[c];
        }
        else{
            if(numeros[c] < menor){
                menor  = numeros[c];
            }
        }
    }
    printf("%d",menor);
    return 0;
}