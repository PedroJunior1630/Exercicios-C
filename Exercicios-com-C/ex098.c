#include <stdio.h>



void linha(int tam){
    int c;
    while(c<=tam){
        printf("=+=");
        c++;
    }
    printf("\n");
}

void infomoeda(float moeda){
    linha(20);
    printf("A metade de R$%.2f é R$%.2f\n",moeda, moeda/2);
    printf("O dobro é R$%.2f\n",moeda*2);
    printf("Aumento de 10 por cento: R$%.2f\n",moeda + (moeda * 0.10));
    printf("Convertido em US$: %.2f\n",moeda/4.50);
    printf("Convertido em €: %.2f\n",moeda/5.80);
    linha(20);
}

int main(){
    float moeda;
    linha(20);
    printf("Digite um preço: ");
    scanf("%f",&moeda);
    infomoeda(moeda);
    return 0;
}
