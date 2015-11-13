#include<stdio.h>

int inicio;
int fin;
int i;


int main()
{
	printf("Programa que muestra un rango\n");
	printf("Dame el principio del rango:");
	scanf("%d",&inicio);
	printf("Dame final del rango");
	scanf("%d",&fin);
	if(inicio < fin)
	{
		for(i=inicio;i<=fin;i++)
		{
			printf("%d\n",i);
		}
	}
	else
	{
		for(i=inicio;i>=fin;i--)
		{
			printf("%d\n",i);
		}
	}
	system("pause");
}
