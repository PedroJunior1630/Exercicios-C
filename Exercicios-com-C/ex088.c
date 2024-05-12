#include <stdio.h>

/*Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que mostre uma mensagem vário
Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
+-------=======------+
 Aprendendo Portugol
 Aprendendo Portugol
 Aprendendo Portugol
 Aprendendo Portugol
+-------=======------+*/

void gerador(char frase[], int n){
    printf("========================\n");
    for(int c = 1; c<=n; c++){
        printf("%s\n",frase);
    }
    printf("========================\n");
}
int main(){
    gerador("Olá, Mundo!",4);
    return 0;
}
