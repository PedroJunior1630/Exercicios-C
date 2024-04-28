#include<stdio.h>
#include <string.h>


int main()
{
    int horas, minutos, segundos;
    printf("Digite apenas o tempo em horas: ");
    scanf("%d",&horas);
    minutos =  horas * 60;
    segundos =  horas * 3600;
    printf("======================\n");
    printf("%d horas equivale: \n",horas);
    printf("%d Minutos.\n",minutos);
    printf("%d Segundos\n",segundos);
    return 0;
}
