#include<stdio.h>

int matriz[3][3];
int s;
int i;
int j;
int k;

int main()
{	
	printf("Numero por el que deseas multiplicar:\n");
	scanf("%d",&s);
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingresa un valor  [%d][%d]:\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			printf("%d\t",matriz[0][0]);
			matriz[i][j]=matriz[i][j]*s;
		}
	
	}
	printf("La matriz es:\n");
	printf("\t\t%d\t",matriz[0][0]);
	printf("\t\t%d\t",matriz[0][1]);
	printf("\t\t%d\n",matriz[0][2]);
	printf("\t\t%d\t",matriz[1][0]);
	printf("\t\t%d\t",matriz[1][1]);
	printf("\t\t%d\n",matriz[1][2]);
	printf("\t\t%d\t",matriz[2][0]);
	printf("\t\t%d\t",matriz[2][1]);
	printf("\t\t%d\t\n\n",matriz[2][2]);
	system("pause");
}
