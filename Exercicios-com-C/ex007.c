#include <stdio.h>

int main(){
    int num;
    int r;
    printf("Digite um número: ");
    scanf("%d",&num);
    for(int c = 1; c <= 10; c++){
        r =  num * c;
        printf("%d x %d =  %d\n",num,c,r);
    }
    return 0;
}