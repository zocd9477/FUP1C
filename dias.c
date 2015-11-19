#include<stdio.h>

int m1;
int m2;
int d1;
int d2;
int z=30;
int r;
int h;
int x;

int main()
{
	printf("Programa que imprime la diferencia de  dias entre 2 fechas\n");
	printf("Ingresa el numero de tu primer mes:\n");
	scanf("%d",&m1);
	printf("Ingresa el dia del mes:\n");
	scanf("%d",&d1);
	printf("Ingresa el numero de tu segundo mes:\n");
	scanf("%d",&m2);
	printf("Ingresa el dia del mes:\n");
	scanf("%d",&d2);
	if (m1>m2)
	{
		r=(m1*z)+d1;
		h=(m2*z)+d2;
		x=r-h;
		printf("%d es la diferencia de dias\n",x);
	}
	else
	{
		r=(m1*z)+d1;
		h=(m2*z)+d2;
		x=h-r;
		printf("%d es la diferencia de dias\n",x);
	}
}
