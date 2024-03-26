#include <stdio.h>
 
int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("Número par");
    }else{
        printf("Número ímpar");
    }
    return 0;
}