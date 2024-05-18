#include <stdio.h>
#include <string.h>
#include <time.h>


void linha(int n){
    for(int c =1; c<=n;c++){
        printf("=+=");
    }
    printf("\n");
}

int main(){
    int matriz[6];
    int palpites, sorteia;
    printf("Deseja quantos palpites? ");
    scanf("%d",&palpites);
    srand(time(NULL));
    linha(20);
    for(int c = 1; c <= palpites; c++){
        for(int i = 0; i < 6;i++){
            sorteia = rand() % 60 + 1;
            if(i>0){
                if(matriz[i-1] == sorteia){
                    matriz[i-1] = sorteia+1;
                }
            }
            matriz[i] = sorteia;
            printf("|  %d  | ",matriz[i]);
        }
        printf("\n");

    }
    linha(20);
    return 0;
}
