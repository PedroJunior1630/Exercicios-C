#include <stdio.h>

int main(){
    int num;
    char numeros[21][64] = {"Zero","Um","Dois","Três","Quatro","Cinco","Seis","Sete","Oito","Nove", "Dez","Onze","Doze","Treze","Quatorze","Quinze","Dezesseis","Dezessete","Dezoito","Dezenove","Vinte"};
    printf("Digite um número: ");
    scanf("%d",&num);
    printf("O número %d escrito por extenso é: %s",num, numeros[num]);
    return 0;
}
