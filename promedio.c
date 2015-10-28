#include<stdio.h>
#include<conio.h>

float  calificacion1;
float  calificacion2;
float  calificacion3;
float  calificacion4;
float suma;
float promedio;

int  main()

{
	
	printf("ingresa tu calificacion en Ingles");
	scanf("%f",&calificacion1);
		printf("ingresa tu calificacion en Arquitectura de computadoras");
	scanf("%f",&calificacion2);
		printf("ingresa tu calificacion en Algebra");
	scanf("%f",&calificacion3);
		printf("ingresea tu calificacion en programacion");
	scanf("%f",&calificacion4);
	suma=calificacion1+calificacion2+ calificacion3+ calificacion4;
	prom=suma/4;
	
	
	if(promedio>=7){
		printf("  aprovado  ");
		

		
		
		
	}else
		printf(" reprovado");
	
	getch();
	
}

