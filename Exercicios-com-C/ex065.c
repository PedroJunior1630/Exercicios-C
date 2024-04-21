
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<time.h>

int main()
{
    int qntd = 0;
    char esc[6];
    int usuario, computador;
    
    while(1 != 10){
        printf("\n=========================\n");
        printf("IMPAR OU PAR\n");
        printf("=========================\n");
        
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
            qntd += 1;
        }
        if(soma % 2 == 0 && strcmp(esc,"impar") == 0){
            printf("O COMPUTADOR VENCEU!!!");
            break;
        }
         if(soma % 2 == 1 && strcmp(esc,"impar") == 0){
            printf("USUARIO VENCEU!!!");
            qntd += 1;
        }
        if(soma % 2 == 1 && strcmp(esc,"par") == 0){
            printf("O COMPUTADOR VENCEU!!!");
            break;
        }
    }
    printf("\nO usuario teve %d vitórias consecutivas.",qntd);
}