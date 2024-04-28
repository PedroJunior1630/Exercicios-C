#include<stdio.h>
#include <string.h>

int fatorial(int n){
    int fat = 1;
    for(int c =1; c <= n; c++){
        fat *= c;
    }
    return fat;
}

int main()
{
    printf("=======================================\n");
    printf("Permutação Simples - Palavras\n");
    printf("=======================================\n");
    char palavras[64];
    int pe;
    printf("Digite uma palavra: ");
    scanf("%s",palavras);
    pe = fatorial(strlen(palavras));
    printf("A palavra %s tem %d anagramas no total.",palavras,pe);
    
    return 0;
}
