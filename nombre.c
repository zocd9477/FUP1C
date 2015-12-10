#include<stdio.h>
#include<stdlib.h>

int i;
char c;
char cadena[50];
int aux;

int main()
{
	
	c='\0';
	i=0;
	while(c!='\n')
	{
		scanf("%c",&c);
		cadena[i]=c;
		i++;
	}
	aux=i;
	cadena[i]='\0';
	printf("%s",cadena);
}
