#include <stdio.h>

int main(){
    int saldo;
    int saque;
    printf("Digite seu saldo R$: ");
    scanf("%d", &saldo);
    printf("Quanto deseja sacar R$: ");
    scanf("%d", &saque);
    if(saque <= saldo){
        printf("Saque de R$%d permitido, tenha um bom dia!", saque);
    }else{
        printf("R$%d ultrapassou o valor possível para sacar que é de R$%d",saque, saldo);
    }
    return 0;
}