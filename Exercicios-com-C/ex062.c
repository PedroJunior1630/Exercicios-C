
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include <string.h>

int fatorial(int num){
    int fat = 1, c=1;
    while(c <= num){
        fat *= c;
        c++;
    }
    return fat;
}

int main()
{
    printf("=========================\n");
    printf("ANAGRAMAS DE UMA PALVRA\n");
    printf("=========================\n");
    
    char palavra[64];
    int tam, ana;
    
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    
    tam = strlen(palavra);
    ana = fatorial(tam);
    
    
    printf("A palavra %s tem %d anagramas",palavra, ana);
    
    
}
