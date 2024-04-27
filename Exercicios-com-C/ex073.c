#include <stdio.h>
int main(){
    int n1, n2, n3, n4, cont9 = 0, pos;
    printf("Digite o 1° número: ");
    scanf("%d",&n1);
    printf("Digite o 2° número: ");
    scanf("%d",&n2);
    printf("Digite o 3° número: ");
    scanf("%d",&n3);
    printf("Digite o 4° número: ");
    scanf("%d",&n4);
    int numeros[4] = {n1, n2, n3, n4};
    int pares[4];
    printf("O número 9 apareceu ");
    for(int c = 0; c< 4; c++){
        if(numeros[c] == 9){
            cont9 += 1;
        }
    }
    printf("%d vezes.\n",cont9);
    printf("Números pares: ");
    for(int c = 0; c < 4; c++){
        if(numeros[c] % 2 == 0){
            printf("%d | ",numeros[c]);
        }
    }
    return 0;
}