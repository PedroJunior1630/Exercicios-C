#include <stdio.h>

int main(){
    float produto, parcelas, juros, valor;
    int opc;

    printf("Digite o preço do produto R$: ");
    scanf("%f",&produto);
    printf("+========================================+\n");
    printf("ESCOLHA UMA FORMA DE PAGAMENTO\n");
    printf("+========================================+\n");
    printf("[ 1 ] Á VISTA EM DINHEIRO - 10 por cento\n");
    printf("[ 2 ] Á VISTA NO CARTÃO - 5 por cento\n");
    printf("[ 3 ] 2X PARCELADO(PREÇO NORMAL)\n");
    printf("[ 4 ] 3X PARCELADO(20 por cento de JUROS)\n");
    printf("+========================================+\n");

    printf("Digite sua opçao: ");
    scanf("%d",&opc);

    if(opc == 1){
        printf("Seu produto ganhou 10 por cento de desconto.\n");
        valor = produto + (produto * 10 / 100);
    }
    if(opc == 2){
        printf("Seu produto ganhou 5 por cento de desconto.\n");
        valor = produto + (produto * 5 / 100);
    }
    if(opc == 3){
        parcelas = produto / 2;
        printf("2 parcelas de R$%.2f\n",parcelas);
        valor = produto;
    }
    if(opc == 4){
        juros = produto * 20 / 100;
        parcelas = (produto + juros) / 3;
        printf("3 parcelas de R$%.2f\n",parcelas);
        valor = produto + juros;
    }
    printf("Seu produto vai custar R$%.2f",valor);

    return 0;
}