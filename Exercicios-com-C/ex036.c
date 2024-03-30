#include <stdio.h>

int main(){
    printf("COMPARANDO NÚMEROS\n");
    int n1, n2;
    printf("Digite o 1° número: ");
    scanf("%d",&n1);
    printf("Digite o 2° número: ");
    scanf("%d",&n2);
    if(n1 > n2){
        printf("O valor %d é o maior número\n",n1);
    }
    if(n2 > n1){
        printf("O valor %d é o maior número",n2);
    }else{
        if(n2 == n1){
            printf("Os valores são iguais");
    }   }
    return 0;
}