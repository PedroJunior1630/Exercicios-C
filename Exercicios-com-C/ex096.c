#include <stdio.h>
#include <string.h>

/*Probabilidade de conjuntos*/
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


void menu(){
    cabecalho("ESCOLHA UMA OPÇÃO");
    printf("[ 1 ] - Probabilidade de sair um número par\n");
    printf("[ 2 ] - Probabilidade de sair um número ímpar\n");
    printf("[ 3 ] - Probabilidade sair um número múltiplo de 3\n");
    linha(30);
}

int main(){
    cabecalho("PROBABILIDADE DE CONJUNTOS");

    int tam,opc, maior;
    float pa;
    float par = 0;
    float impar = 0;
    float multi = 0;
    int conjunto[32];

    printf("Digite o tamanho do conjunto: ");
    scanf("%d",&tam);

    for(int c=1; c<=tam;c++){
        printf("Digite o número inteiro da posição %d do conjunto: ",c);
        scanf("%d",&conjunto[c]);
        if(conjunto[c] % 2 == 0){
            par += 1;
        }
        if(conjunto[c] % 2 ==1){
            impar += 1;
        }
        if(conjunto[c] % 3 ==0){
            multi += 1;
        }
    }

    linha(60);
    printf("Seu conjunto tem %d valores e sendo eles: ",tam);

    for(int c=1;c<=tam;c++){
        printf("|  %d  | ",conjunto[c]);
    }

    printf("\n");
    menu();

    printf("Qual opção deseja? ");
    scanf("%d",&opc);

    if(opc == 1){
        pa = (par/tam) * 100;
    }
    if(opc == 2){
        pa = (impar/tam) * 100;
    }
    if(opc == 3){
        pa = (multi/tam) * 100;
    }
    printf("A probabilidade do conjunto é P(a) = %.2f por cento.",pa);
    return 0;
}
