#include<stdio.h>

int n;
int j;
int suma;
int k=0;
int l=1;
int R=0;

int main()
{
	printf("Programa que imprime los N numeros  de la serie de Fibonacci \n");
	printf("Dame el al que deseas llegar:");
	scanf("%d",&n);
	printf("%d\t",R);
	for (j=0;j<n;j++)
	{
		suma=k+l;
		k=l;
		l=suma;
		suma=k;
		printf("%d\t",suma);
	}
	system("pause");
	
}
