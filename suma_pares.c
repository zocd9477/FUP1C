#include<stdio.h>

int n;
int j;
int suma;

int main()
{

	printf("Programa que suma solo numeros pares\n");
	printf("Dame el al que deseas llegar:");
	scanf("%d",&n);
	for (j=0;n>=j;j=j+2)
	{
		suma=suma+j;
		
		printf("%d\n",suma);
	}
	system("pause");
	
}
