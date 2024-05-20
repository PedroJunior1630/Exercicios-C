#include <stdio.h>
#include <string.h>
#include <unistd.h>

void linha(int tam){
    int c;
    while(c<=tam){
        printf("=");
        c++;
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

int main(){
    cabecalho("RPG JUJUTSU KAISEN : GAME");
    cabecalho("SOBRE");
    linha(40);
    printf("Existem quatro tópicos na batalha: Ataque(A) Defesa(D) Inteligência(I) [0-1000] Energia Amaldiçoada(E)[0-10000]\n");
    printf("Você é um fetiçeiro e seu poder vem da (E)\n");
    printf("Expansão de domínio: exige muita (E) e gera uma área onde cerca o oponente e o atinge com um acerto garantido.\n");
    printf("Domínio simples: usado contra a expansão de domínio, dependendo do domínio pode durar bastante ou pouco tempo anulando o acerto garantido.\n");
    printf("Reversão do fetiço: basicamente é transformar a (E) em energia positiva, fazendo assim possível se regenerar e curar.\n");
    printf("Habilidades Inatas: São habilidades que já nasceram gravadas no personagem, como a expansão de domínio.\n");
    printf("Habilidades não-inatas: São habilidades que podem ser aprendidas e não são gravadas no personagem como domínio simples e reversão do fetiço.\n");
    linha(40);
    sleep(8);
    sleep(2);
    printf("Se prepare para a luta...\n");
    printf("Seu personagem é o SATORO GOJO... Veja sobre: \n");
    sleep(2);
    cabecalho("SATORO GOJO");
    printf("1° Técnica: Intangibilidade\n");
    printf("2° Técnica: Seis olhos \n");
    printf("3° Técnica: Azul \n");
    printf("4° Técnica: Vermelho\n");
    printf("5° Técnica: Vazio Roxo \n");
    printf("6° Técnica: Vazio Imensurável\n");
    printf("7° Técnica: Domínio Simples: \n");
    printf("8° Técnica: Reversão do fetiço\n");
    linha(40);
    sleep(6);
    printf("Observe seu adversário Ryohmen Sukuna... Veja sobre: \n");
    sleep(1);
    cabecalho("SUKUNA");
    printf("1° Técnica: Corte Normal\n");
    printf("2° Técnica: Amplificação de domínio\n");
    printf("3° Técnica: Santuário Malevolente\n");
    printf("4° Técnica: Mahoraga\n");
    printf("5° Técnica: Agito\n");
    printf("6° Técnica: Desmantelar \n");
    printf("7° Técnica: Reversão do fetiço\n");
    linha(40);
    sleep(6);
    
    return 0;
}
