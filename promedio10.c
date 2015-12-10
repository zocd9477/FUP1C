#include<stdio.h>
int arreglo[10];
int i;
int calif;
int suma;
float div;



int main()
{
	printf("Programa que imprime el promedio de 10 calificaciones\n");
	for(i=0; i<10;  i++)
	{
    	printf("Dame una calificacion:");
    	scanf("%d",&arreglo[i]);
     	
 	suma=suma+arreglo[i];
 	
	}
			 
			 
div=(float)suma/10;
			 	
printf("El promedio de tus calificaciones es: \t %f",prom);
 
   
  
 	system("pause");
 	
  } 
