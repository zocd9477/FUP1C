#include<stdio.h>
#include<stdlib.h>
int cont;  
char buscar;
char reemplazar;
int  i;
char c;
char nombre[50];
	
int main()
{
	c='\0';	
	i=0;
	printf("Ingresa una palabra:");
	while(c!='\n')
	{
		scanf("%c",&c);
    	nombre[i]=c;
        i++;
    }
	cont=i;
    printf("ingresa la  letra a  buscar  ");  
	scanf(" %c",&buscar);
	printf("ingresa la  letra a  reeemplazar ");  
    scanf(" %c",&reemplazar);
	for(i=0; i<=cont;  i++)
	{
		if(nombre[i]==buscar)
		{
			nombre[i]=reemplazar;
		}
                   
    }
	printf("%s",nombre);
	        
system("pause");
}
