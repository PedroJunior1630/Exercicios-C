#include <stdio.h>
#include <math.h>
void main()
{
    float n1;
    float n2;
    float med;
    
    printf("1° Nota: ");
    scanf("%f",&n1);
    printf("2° Nota: ");
    scanf("%f",&n2);
    
    med = (n1 + n2) / 2;
    
    printf("A média é igual a %f",med);
}
