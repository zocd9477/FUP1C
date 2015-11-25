#include<stdio.h>

int cal[10];
int i;
int posibles[11];
int mayor,posMayor;
int bandera=0;

int main()
{
	for(i=0;i<10;i++)
	{
		printf("Dame un numero");
		scanf("%d",&cal[i]);
	}
	for(i=0;i<11;i++)
	{
		posibles[i] = 0;
	}
	for(i=0;i<11;i++)
	{
		posibles[cal[i]]++;
	}
	posMayor=0;
	mayor=posibles[0];
	for(i=1;i<11;i++)
	{
		if(posibles[i] == mayor)
		{
			bandera = 1;
		}
		if(posibles[i] > mayor)
		{
			mayor=posibles[i];
			posMayor=i;
			bandera =0;
		}
		
		
	}
	if(bandera==0)
	{
		printf("La moda es: %d\n",posMayor);
	}
	else
	{
		printf("No existe moda\n");
	}
	system("pause");
}
