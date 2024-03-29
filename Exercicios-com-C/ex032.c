#include <stdio.h>

int main(){
    int n[3];
    int maior, menor;
    
    printf("Digite o 1° número: ");
    scanf("%d", &n[1]);
    printf("Digite o 2° número: ");
    scanf("%d",&n[2]);
    printf("Digite o 3° número: ");
    scanf("%d",&n[3]);
    for(int c=1; c <=3; c++){
        if(n[c] > maior){
            maior = n[c];
        }else{
            if(n[c] < menor){
                menor = n[c];
            }
        }
    }
    printf("Maior número:  %d\n", maior);
    printf("Menor número: %d",menor);
    
    return 0;
}