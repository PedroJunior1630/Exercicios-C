#include <stdio.h>

int main(){
    int vel, multa;
    printf("LENDO A VELOCIDADE\n");
    printf("Digite quantos km/h estava: ");
    scanf("%d", &vel);
    if(vel > 80){
        int km = vel - 80;
        multa = km * 7;
        printf("Você ultrapassou o limite de velocidade que é de 80km/h, sendo assim sua multa é de R$%d,00",multa);
    }else{
        printf("Continue assim! DIRIJA COM SEGURANÇA!");
    }
    return 0;
}