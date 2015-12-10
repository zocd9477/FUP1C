#include<stdio.h>

int num[10];
int i;
int posibles[11];
int mayor,posMayor;

int main()
{
	printf("Programa que imprime la moda de 10 numeros\n");
	for(i=0;i<10;i++)
	{
		printf("Dame un numro numeros:\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<11;i++)
	{
		posibles[i] = 0;
	}
	for(i=0;i<11;i++)
	{
		posibles[num[i]]++;
	}
	posMayor=0;
	mayor=posibles[0];
	for(i=1;i<11;i++)
	{
		if(posibles[i] > mayor)
		{
			mayor=posibles[i];
			posMayor=i;
		}
		
		
	}
	
	printf("La moda es: %d\n",posMayor);
	
}
