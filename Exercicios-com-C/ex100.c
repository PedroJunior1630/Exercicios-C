#include <stdio.h>


int main(){
    int lista[5];
    printf("Digite 5 números: \n");
    for(int c=0; c < 5;c++){
        printf("%d° Número: ",c+1);
        scanf("%d",&lista[c]);
    }
    printf("Em ordem reversa...\n");
    for(int i=4; i>=0;i--){
        printf("| %d | ",lista[i]);
    }
    return 0;
}
