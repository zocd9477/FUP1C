#include<stdio.h>
#include<stdlib.h>

int i;
int num;
int residuo;
int cosiente;
int main()



{
 	printf("Programa que descompone numeros \n   ");
     
   
                      
         	  printf("Dame un numero:\t");	
	          scanf("\n%d",&num);
	          
                  do{
	    
		            residuo=num%10;
	            	cosiente=num/10;
	            	printf("\n %d",residuo);
		            num=cosiente;
		            
	
		            
                    }while(num != 0);
                    	
                   
              
             
              
system("pause");
}
