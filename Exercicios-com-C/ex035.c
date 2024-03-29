#include <stdio.h>

int main(){
    printf("EMPRÉSTIMO BANCÁRIO PARA UMA CASA\n");
    printf("---------------------------------------------------------------\n");
    printf("PARCELA INFERIOR OU IGUAL A 30 POR CENTO DO SALÁRIO = APROVADO\n");
    printf("PARCELA SUPERIOR A 30 POR CENTO DO SALÁRIO =  NEGADO\n");
    printf("----------------------------------------------------------------\n");
    printf("PREENCHA OS DADOS\n");
    char nome[32];
    float salario, valor, parcelas, sal30;
    int anos, prestacoes;
    
    printf("Nome: ");
    scanf("%s",&nome);
    printf("Valor R$: ");
    scanf("%f",&valor);
    printf("Salário: ");
    scanf("%f",&salario);
    printf("Quantos anos pretende pagar? ");
    scanf("%d",&anos);
    
    prestacoes = anos * 12;
    parcelas =  valor / prestacoes;
    sal30 = salario * 0.30;
    printf("Um emprésimo de %.2f sendo paga em %d parcelas de %.2f por %d anos...\n",valor,prestacoes,parcelas,anos);
    printf("Seu empréstimo foi ");
    if(parcelas <= sal30){
        printf("ACEITO!\n");
    }else{
        printf("NEGADO!\n");
    }
    
    return 0;
}