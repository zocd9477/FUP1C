#include<stdio.h>
#include<stdlib.h>

char palabra[50];
char c;
char I; 
int i;

int main()
{
	printf("Escribe una palabra\n");
	scanf("%s", palabra);
	printf("Escribe la letra que deseas cambiar\n");
	scanf(" %c", &c);
	printf("Escribe la letra a ingresar\n");
	scanf(" %c", &I);
	for(i=0;i<50;i++)
	{
		if(palabra[i]==c)
		{
			palabra[i] = I;
		}
	}
	printf(" %s\n", palabra);
}

