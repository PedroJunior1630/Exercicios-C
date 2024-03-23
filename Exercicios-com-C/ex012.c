#include <stdio.h>

int main(){
    float c;
    float f;
    
    printf("Digite a temperatura em C°: ");
    scanf("%f",&c);
    
    f = (9 * c) / 5 + 32;
    
    printf("%.2f C° equivale a %.2f F°",c,f);
    
    return 0;
}