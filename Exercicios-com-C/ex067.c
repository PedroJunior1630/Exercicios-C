#include <stdio.h>
#include <string.h>

int main(){
    char escolha[4];
    char nomes[32][128];
    char nbarato[32];
    int cont = 0, qntdmil = 0;
    float preco, total = 0, barato = 0;
    
    while(0 != 1){
        cont ++;
        printf("\n=========================\n");
        printf("CAIXA REGISTRADORA\n");
        printf("=========================\n");
        printf("Nome do produto: ");
        scanf("%s",nomes[cont]);
        printf("Preço: R$");
        scanf("%f",&preco);
        if(preco > 1000){
            qntdmil += 1;
        }
        if(cont == 1){
            barato = preco;
            strcpy(nbarato, nomes[cont]);
        }else{
            if(preco < barato){
                barato = preco;
                strcpy(nbarato, nomes[cont]);
            }
        }
        total += preco;
        printf("\n=========================\n");
        printf("Deseja continuar?[S/N]: ");
        scanf("%s",escolha);
        if(strcmp(escolha,"N") == 0 || strcmp(escolha,"n") == 0){
            break;
        }
    }
    printf("Total R$%.2f\n",total);
    printf("Produto que custam mais de R$1000,00: %d\n",qntdmil);
    printf("Nome do produto mais barato é %s\n e ele custa %.2f",nbarato,barato);
    return 0;
}