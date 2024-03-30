#include <stdio.h>

int main(){
    float a, b, c;
    printf("Digite 1° reta: ");
    scanf("%f",&a);
    printf("Digite a 2° reta: ");
    scanf("%f",&b);
    printf("Digite a 3° reta: ");
    scanf("%f",&c);
    printf("Com estas retas você ");
    if(a + b > c && b + c > a && c + a > b){
        printf("PODE FORMAR UM TRIÂNGULO! E DO TIPO:");
        if(a == b && a == c && c == b){
            printf("EQUILÁTERO");
        }
        if(a == b && a!= c || a == c && a != b){
            printf("ISOSCELES");
        }
        if(a != b && b != c && a != c){
            printf("ESCALENO");
        }
    }else{
        printf("NÃO PODE FORMAR UM TRIÂNGULO!\n");
    }
    return 0;
}