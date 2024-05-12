#include <stdio.h>


int media(float n1, float n2){
    float media = (n1 + n2) / 2;
    return media;
}
void situacao(float media){
    if(media < 5){
        printf("REPROVADO!\n");
    }
    if(media >= 5 && media <= 6){
        printf("RECUPERAÇÃO!\n");
    }
    if(media > 6){
        printf("APROVADO!\n");
    }
}
int main(){
    float med;
    med = media(7.8, 6.63);
    printf("Média de %.2f situação: ",med);
    situacao(med);
    return 0;
}
