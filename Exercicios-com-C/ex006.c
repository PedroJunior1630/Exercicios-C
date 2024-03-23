#include <stdio.h>

int main(){
    int metros;
    int cm;
    int mm;
    
    printf("Digite um valor em metros: ");
    scanf("%d",&metros);
    cm = metros * 100;
    mm = metros * 1000;
    printf("%d metro equivale: \n",metros);
    printf("%d cm\n",cm);
    printf("%d mm\n",mm);
}