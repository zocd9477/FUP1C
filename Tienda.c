#include <stdio.h>
#include <stdlib.h>


int opcion;
int x;
int opcion2;
int ganancias;
int main ()
{
    printf("Ingresa 1 para ver venta\n");
    printf("Ingresa 2 para ver ganancias\n");
    scanf("%d",&opcion);
    ganancias = 500;
    switch (opcion)
    {
           case 1:
                {
                	printf("Selecciona producto a comprar");
                    printf("1.-Papas:$10\n");
                    printf("2.-Refresco$21\n");
                    printf("3.-Palomitas$7\n");
                    printf("4.-Chocolates$7\n");
                    printf("5.-Paletas$2\n");
                    scanf("%d",&opcion2);
                    switch (opcion2)
                     {
                     	case 1:
                     		{
                     			printf("Has seleccionado Papas\n");
                     			printf("Numero de productos a comprar");
                     			scanf("%d",&x);
                     			x = (x*10);
                     			printf("total papas: %d", x );
		                    }break;
		                case 2:
							{
   		   					    printf("Has selecciona Refresco\n");
   		   					    printf("Numero de productos a comprar");
                     			scanf("%d",&x);
                     			x = (x*21);
                     			printf("total papas: %d", x );
               			   }break;
						case 3:
							{
								printf("Has seleccionado Palomitas\n");
								printf("Numero de productos a comprar");
                     			scanf("%d",&x);
                     			x = (x*7);
                     			printf("total papas: %d", x );
							}break;
						case 4:
							 {
							 	printf("Has selecciona chocolate\n");
							 	printf("Numero de productos a comprar");
                     			scanf("%d",&x);
                     			x = (x*7);
                     			printf("total papas: %d", x );
							 }break;
						case 5:
							{
								printf("Has seleccionado Paletas\n");
								printf("Numero de productos a comprar");
                     			scanf("%d",&x);
                     			x = (x*2);
                     			printf("total papas: %d", x );
							}break;
						default :
						{
							printf("Error");
						}	
					 }
                }break;
           case 2:
            	{
            		printf("Las ganancias totales son: %d",ganancias);
				}break;
			default :
			{
				printf("Error!!!!");
				}	
    }system("pause");
}
