
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<time.h>

int main()
{
    printf("=========================\n");
    printf("IMPAR OU PAR\n");
    printf("=========================\n");
    
    char esc[6];
    int usuario, computador;
    
    printf("Impar ou par?[P/I]: ");
    scanf("%s",esc);
    
    printf("Digite um número[1-10]: ");
    scanf("%d",&usuario);
    
    srand(time(NULL));
    
    computador = rand() % 10 + 1;
    int soma =  usuario + computador;
    printf("O JOGADOR ESCOLHEU %s e JOGOU %d E O COMPUTADOR JOGOU %d... A SOMA DEU %d\n" ,esc,usuario,computador,soma);
    if(soma % 2 == 0 && strcmp(esc,"par") == 0){
        printf("USUARIO VENCEU!!!");
    }
    if(soma % 2 == 0 && strcmp(esc,"impar") == 0){
        printf("O COMPUTADOR VENCEU!!!");
    }
     if(soma % 2 == 1 && strcmp(esc,"impar") == 0){
        printf("USUARIO VENCEU!!!");
    }
    if(soma % 2 == 1 && strcmp(esc,"par") == 0){
        printf("O COMPUTADOR VENCEU!!!");
    }
    
    
    
    /*Criar uma variavel do tipo caractere para armazenar o valor par ou impar.
      Criar uma lista que armazene dois valores strings, par e impar
      Fazer o computador aleatorizar entre 0 e 1 e pegar uma das strings pelo índice
      Fazer o computador aleatorizar entre 1 a 10
      Pedir ao usuario para digitar par ou impar
      Pedir ao usuario um número de 1 a 10
    */
}
