#include <stdio.h>

int main(){
    printf("AUMENTO DE SALÁRIO\n");
    printf("Igual ou menor que R$1250,00 =  15%\n");
    printf("Maior que R$1250,00 =  10%\n");
    float salario;
    float aum10, aum15;
    
    printf("Digite seu salário R$ ");
    scanf("%f",&salario);
    
    printf("O novo salário é de R$");
    
    if(salario <= 1250){
        aum10 =  salario + (salario * 0.10);
        printf("%.2f",aum10);
    }else{
        aum15 = salario + (salario * 0.15);
        printf("%.2f",aum15);
    }
}