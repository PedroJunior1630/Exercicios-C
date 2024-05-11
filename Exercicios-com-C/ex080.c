#include <stdio.h>
int main()
{
	float r, comp;
	float pi = 3.1415;
	printf("Digite o raio do circulo(m): ");
	scanf("%f",&r);
	comp = 2 * pi * r;
	printf("O comprimento deste ciruclo é de %.4fm",comp);
}