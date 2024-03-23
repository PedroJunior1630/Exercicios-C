#include <stdio.h>

int main(){
    float pro;
    float desc;
    
    printf("Preço do produto R$: ");
    scanf("%f",&pro);
    
    desc =  pro - (pro * 5 / 100);
    
    printf("Seu produto com 5 por cento de desconto vai custar R$%.2f",desc);
    return 0;
}
