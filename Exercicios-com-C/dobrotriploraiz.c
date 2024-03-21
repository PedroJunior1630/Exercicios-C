#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    int dobro;
    int triplo;
    float rqtd;
    
    printf("Digite um número: ");
    scanf("%d",&n);
    
    dobro = n * 2;
    triplo = n * 3;
    rqtd = pow(n,0.5);
    
    printf("Dobro: %d\n",dobro);
    printf("Triplo: %d\n", triplo);
    printf("Raiz Quadrada: %f\n",rqtd);

}
