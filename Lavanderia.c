#include<stdio.h>

int kg;
int tipo;

int main()
{
	
	printf("Ingresa numero de kilos a lavar\n");
	scanf("%d", &kg);
	{
		printf("ciclo de lavado: minimo");
	}
	if (kg>10, && kg<16)
	{
		printf("ciclo de lavado: medio");
	}
	if (kg>15, && kg<21)
	{
		printf("ciclo de lavado: maximo");
	}
	if (kg>20)
	{
		printf("No lava");
	}
	printf("ingresa tipo de ropa; 1-delicada 2-normal 3-sucia: \n");
	scanf("%\d", &tipo);
	if (tipo==1)
	{
		print("Tiempo de lavado: 5 minutos");
	}
	if (tipo==2)
	{
		printf("Tiempo de lavado: 10 minutos");
	}
	if (tipo==3)
	{
		printf("Tiempo de lavado: 20 minutos");
	}
}
