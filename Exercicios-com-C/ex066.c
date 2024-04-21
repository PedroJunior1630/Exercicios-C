#include <stdio.h> 
#include <string.h>
int main(){
    int idade, cont =0, maior = 0, mul = 0, hom = 0;
    char sexo[5];
    char escolha[5];
    while(0 != 1){
        cont ++;
        printf("=========================\n");
        printf("CADASTRO DA %d° PESSOA\n",cont);
        printf("=========================\n");
        printf("Idade: ");
        scanf("%d",&idade);
        if(idade > 18){
            maior ++;
        }
        if(strcmp(sexo, "F") == 0 || strcmp(sexo, "f") == 0){
            if(idade < 20){
                mul ++;
            }
        }else{
                if(strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0){
                hom ++;
            }
        }

        printf("Sexo[M/F]: ");
        scanf("%s",sexo);
        printf("Deseja continuar?[S/N]: ");
        scanf("%s",escolha);
        if(strcmp(escolha, "N") == 0 || strcmp(escolha,"n") == 0){
            break;
        }
    }
    
    printf("Temos %d pessoas maiores de 18 anos.\n",maior);
    printf("Temos %d homens cadastrados.\n",hom);
    printf("Temos %d mulheres com menos de 20 anos.\n",mul);
    
    return 0;
}