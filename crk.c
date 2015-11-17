#include<stdio.h>

int prof;
int avan;
int ret;
int s=1;
int d;
int o;

int main()
{
	printf("Programa que te dira cuanto tardaria un cangrejo en salir, si cayera en un hoyo \n");
	printf("Escribe la profundidad del hoyo:");
	scanf("%d",&prof);
	printf("Metros que avanza durante la mañana:");
	scanf("%d",&avan);
	printf("Metros que retrocede en la noche:");
	scanf("%d",&ret);
	if(avan>ret && prof>avan)
	{
		
		o=avan-ret;
		d=prof/o;
		s=d;
		printf("%d dias",d);
		
	}
	if(avan>prof)
		{
			printf("1 dia");
		}
	else
	{
		o=avan-ret;
		d=o/prof;
		s++;
		s=d;
		printf("%d dias",s);
	}
	
}
