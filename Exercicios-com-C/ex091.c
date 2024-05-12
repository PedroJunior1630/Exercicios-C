#include <stdio.h>

void calculaArea(float l,float c){
    float ar;
    ar = l * c;
    printf("As dimensoes de %.2fx%.2fm² tem uma área de %.2fm²\n",l,c,ar);
}

int main(){
    float larg, comp;
    printf("Digite a largura(m): ");
    scanf("%f",&larg);
    printf("Digite o comprimento(m): ");
    scanf("%f",&comp);
    calculaArea(larg, comp);
    return 0;
}
