#include <stdio.h>

int main(){
    int num;
    char numeros[21][64] = {"Zero","Um","Dois","Três","Quatro","Cinco","Seis","Sete","Oito","Nove", "Dez","Onze","Doze","Treze","Quatorze","Quinze","Dezesseis","Dezessete","Dezoito","Dezenove","Vinte"};
    printf("Digite um número entre 0 e 20: ");
    scanf("%d",&num);
    while(1 != 2){
        if(num > 20 || num < 0){
            printf("ERROR DIGITE NOVAMENTE!!\n");
            printf("Digite um número entre 0 e 20: ");
            scanf("%d",&num);
        }else{
            break;
        }
    }
    printf("O número %d escrito por extenso é: %s",num, numeros[num]);
    return 0;
}