
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Digite altura(m): ");
    scanf("%f",&altura);
    
    printf("Digite seu peso(kg): ");
    scanf("%f",&peso);
    
    imc = peso / (altura * altura);
    
    printf("SEU IMC É DE %.2f, PORTANTO VOCÊ ESTÁ: ",imc);
    if (imc < 18.5){
        printf("ABAIXO DO PESO");
    }
    if(imc >= 18.5 && imc <= 25){
        printf("PESO IDEAL");
    }
    if(imc > 25 && imc <= 30){
        printf("ACIMA DO PESO");
    }
    if(imc > 30 && imc <= 40){
        printf("OBESIDADE");
    }
    if(imc > 40){
        printf("OBESIDADE MÓRBIDA");
    }
}
