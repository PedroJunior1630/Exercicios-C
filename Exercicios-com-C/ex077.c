#include<stdio.h>
#include <string.h>


int main()
{
    int n1, n2, n3, aux;
    printf("Digite o 1° número: ");
    scanf("%d",&n1);
    printf("Digite o 2° número: ");
    scanf("%d",&n2);
    printf("Digite o 3° número: ");
    scanf("%d",&n3);
    printf("Em ordem crescente os números são: ");
    while(1 != 2){
        if(n1 < n2 && n1 < n3){
            if(n2 < n3){
                break;
            }else{
                aux = n3;
                n3 = n2;
                n2 =  aux;
            }
        }else{
            if(n1 > n2){
                aux = n1;
                n1 = n2;
                n2  =  aux;
            }
            if(n1 > n3){
                aux = n1;
                n1 =  n3;
                n3 = aux;
            }
        }
    }
    printf("%d | %d | %d",n1,n2,n3);
    return 0;
}
