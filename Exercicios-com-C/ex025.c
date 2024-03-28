#include <stdio.h>
int main(){
    int soma = 0;
    int num;
    int n;
    printf("Digite um número: ");
    scanf("%d",&num);
    n = num;
    for(int c = 1; c <= num; c++){
        printf("%d",n);
        if(c == num){
            printf(" = ");
        }else{
            printf(" + ");
        }
        soma += n;
        n -= 1;
    }
    printf("%d\n",soma);
    return 0;
}