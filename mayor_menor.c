#include<stdio.h>

int arreglo[20];
int i,j;
int mayor;
int may=60000;

int main()
{
	printf("Programa que imprime numeros mayores \n");
	for(i=0;i<20;i++)
	{
		printf("Dame un numero:");
		scanf("%d",&arreglo[i]);
	}
	for(j=0;j<20;j++)
	{
		mayor=0;
		for(i=0;i<20;i++)
		{
			if (arreglo[i] > mayor && arreglo[i] < may)
			{
			
					mayor = arreglo[i];
				
			}
			
		}
		
		printf(">\t\t%d\n",mayor);
		may= mayor;		
	}
	
}
