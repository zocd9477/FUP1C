#include<stdio.h>

int cal[10];
int z[2];

int main()
{
	printf("Programa que saca el promedio de 10 calificaciones\n");
	printf("ingresa las calificacion\n");
	scanf("%d",&cal[0]);
	scanf("%d",&cal[1]);
	scanf("%d",&cal[2]);
	scanf("%d",&cal[3]);
	scanf("%d",&cal[4]);
	scanf("%d",&cal[5]);
	scanf("%d",&cal[6]);
	scanf("%d",&cal[7]);
	scanf("%d",&cal[8]);
	scanf("%d",&cal[9]);
	
	z[0]=cal[0]+cal[1]+cal[2]+cal[3]+cal[4]+cal[5]+cal[6]+cal[7]+cal[8]+cal[9];
	z[1]=z[0]/10;
	printf("El promedio es:\n %d ",z[1]);
}
