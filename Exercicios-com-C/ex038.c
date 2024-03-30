#include <stdio.h>

int main(){
    float n1, n2, media;
    printf("Digite sua 1° nota: ");
    scanf("%f",&n1);
    printf("Digite sua 2° nota: ");
    scanf("%f",&n2);
    media = (n1 + n2) / 2;
    printf("Sua média foi %.2f\n",media);
    if(media < 5){
        printf("Você foi reprovado");
    }
    if(media >= 5 && media <= 6.9){
        printf("Você está de recuperação");
    }
    if(media > 7){
        printf("Você foi aprovado!");
    }
    return 0;
}