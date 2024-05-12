#include <stdio.h>

/*Crie um programa que melhore o procedimento Gerador() da questão anterior 
para que o programador possa escolher uma entre três bordas:
 +-------=======------+ Borda 1
 ~~~~~~~~:::::::~~~~~~~ Borda 2
 <<<<<<<<------->>>>>>> Borda 3
Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
~~~~~~~~:::::::~~~~~~~
 Portugol Studio
 Portugol Studio
 Portugol Studio
~~~~~~~~:::::::~~~~~~~*/

void gerador(char frase[], int qntd, int tipo){
    if(tipo == 1){
        printf("+-------=======------+\n");
        for(int c = 1; c<= qntd; c++){
            printf(" %s\n",frase);
        }
        printf("+-------=======------+\n");
    }
    if(tipo == 2){
        printf("~~~~~~~~:::::::~~~~~~~ \n");
        for(int c = 1; c<= qntd; c++){
            printf("%s\n",frase);
        }
        printf("~~~~~~~~:::::::~~~~~~~ \n");
    }
    if(tipo ==3){
        printf("<<<<<<<<------->>>>>>>\n");
        for(int c = 1; c<= qntd; c++){
            printf(" %s\n",frase);
        }
        printf("<<<<<<<<------->>>>>>>\n");
    }
}

int main(){
    gerador("C/C++", 4, 3);
    return 0;
}
