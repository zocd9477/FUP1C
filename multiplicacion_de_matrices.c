#include<stdio.h>

int a1,a2,b1,b2;
int i;
int j;
int k;
int m;

int main()
{
	printf("Dame la dimension de tus matrices\n");
	printf("Escribe el numero de filas matriz A:");
	scanf("%d",&a1);
	printf("Escribe el numero de columnas matriz A:");
	scanf("%d",&a2);
	printf("Escribe el numero de filas matriz B:");
	scanf("%d",&b1);
	printf("Escribe el numero de columnas matriz B:");
	scanf("%d",&b2);
	
	int matA[a1][a2];
	int matB[b1][b2];
	int m[a1][b2];
	printf("Ingresa los valores de la matriz A:\n");
	for(i=0;i<a1;i++)
	{
		for(j=0;j<a2;j++)
		{
			printf("Dame un numero [%d][%d]:",i+1j+1);
			scanf("%d",&matA[i][j]);
		}
	}
	printf("Ingresa los valores de la matriz B:\n");
	for(i=0;i<b1;i++)
	{
		for(j=0;j<b2;j++)
		{
			printf("Dame un numero [%d][%d]:",i+1j+1);
			scanf("%d",&matB[i][j]);
		}
	}
	for(i=0;i<a1;i++)
 	{
		for(j=0;j<b2;j++)
		{
			m[i][j]=0;
        	for(k=0;k<a2;k++)
			{
				m[i][j]=(matA[i][k]*matB[k][j])+m[i][j];
			}
		}
  	}
  	printf("El resultado es:\n\n");
	for(i=0;i<a1;i++)
	{
		printf("\n");
		for(j=0;j<b2;j++)
		{
		printf("%d ", m[i][j]);
      	}
  }
}
