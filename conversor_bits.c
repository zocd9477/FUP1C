# include<stdio.h>
int megas;
float bits;
float bytes;
float kilobytes;
float gigabytes;
float terabytes;

int main()


{
 printf("Ingresa numero de megas a convertir");
	        scanf("%d",&megas);
	
	    bits=(float)((megas*1024)*1024)*8;
	     bytes=(float)((megas*1024)*1024);
	 
	      kilobytes=(float)megas*1024;
	      gigabytes=(float)(megas/1024);
	       
	       terabytes=(float)((megas/1024)/1024);
	       
		printf("El resultado en Bits es: %f\n",bits);   
			printf("El resultado en Bytes es:%f\n",bytes);
				printf("El resultado en Kilobytes es:%f\n",kilobytes);   
					printf("El resultado en Gigabytes es:%f\n",gigabytes);      
			
				printf("El resultado en Terabytes es: %f\n",terabytes);      
			
			
		
		//system("pause");	
	
	
}
