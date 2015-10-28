#include<stdio.h>/*PROGRAMA  2
  */
int nu;
int nd;
int rs; 
int rr; 
int rm; 
float rd; 

int  main()
{
	    printf("Ingresa 1 para la operacion");
	        scanf("%d",&nu);
	
		printf("Ingresa 2 para la opracion");
		scanf("%d",&nd);
	        
	    rs=nu+nd;
	    rr=nu-nd;
	    rm=nu*nd;
	    rd=(float)nu/nd;
	       
		printf("El resultado de la suma es %d  + %d  es %d\n",nu,nd,rs);
		printf("El resultado de la resta es %d  - %d  es %d\n",nu,nd,rr);
		printf("El resultado de la multiplicacion es %d * %d  es %d\n",nu,nd,rm);
		printf("El resultado de la division es %d / %d  es %f\n",nu,nd,rd);
		system("pause");
}
