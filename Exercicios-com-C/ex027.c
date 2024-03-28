#include <stdio.h>

int main(){
    char string[] = "Programando C";
    int tam;
    for(tam = 0; string[tam] != '\0'; tam++)
    printf("O tamanho desta string é %d",tam);
    return 0;
}