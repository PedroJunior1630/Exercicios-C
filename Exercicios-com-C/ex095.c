#include <stdio.h>

void linha(int tamanho){
    for(int c =1; c<= tamanho; c++){
        printf("=");
    }
    printf("\n");
}

void cabecalho(char msg[]){
    int tam;
    tam = strlen(msg) + 4;
    linha(tam);
    printf("  %s\n",msg);
    linha(tam);
}

void vota(int nasc){
    int ano = 2024;
    int idade;

    idade = 2024 - nasc;
    printf("%d anos de idade.\n",idade);
    if(idade < 18){
        cabecalho("NÃO VOTA");
    }
    if(idade >= 18 && idade <= 64){
        cabecalho("VOTO OBRIGATORIO");
    }
    if(idade > 65){
        cabecalho("VOTO OPCIONAL");
    }      
}


int main(){
    int nasc;
    cabecalho("VOTAÇÃO");
    printf("Digite seu nascimento: ");
    scanf("%d",&nasc);
    vota(nasc);
    return 0;
}
