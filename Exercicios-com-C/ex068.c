#include <stdio.h>

int main(){
    printf("=========================\n");
    printf("CAIXA ELETRÔNICO\n");
    printf("=========================\n");
    int saldo, cedula = 50;
    int cont1 = 0,cont5 = 0, cont10 = 0, cont20 = 0, cont50 = 0;
    printf("Quanto deseja sacar R$: ");
    scanf("%d",&saldo);
    printf("Para sacar %dR$ você receberá: \n",saldo);
    while(saldo != 0){
        if(saldo - cedula >= 0){
            saldo -= cedula;
            cont50 ++;
        }else{
            cedula = 20;
            if(saldo - cedula >= 0){
                saldo -= cedula;
                cont20 ++;
            }else{
                cedula = 10;
                if(saldo - cedula >= 0){
                    saldo -= cedula;
                    cont10 ++;
                }else{
                    cedula = 5;
                    if(saldo - cedula >= 0){
                        saldo -= cedula;
                        cont5 ++;
                    }else{
                        cedula = 1;
                        if(saldo - cedula >= 0){
                            saldo -= cedula;
                            cont1 ++;
                        }
                    }
                }
            }
        }
    }
    printf("%d notas de R$50,00\n",cont50);
    printf("%d notas de R$20,00\n",cont20);
    printf("%d notas de R$10,00\n",cont10);
    printf("%d notas de R$5,00\n",cont5);
    printf("%d notas de R$1,00\n",cont1);
    return 0;
}