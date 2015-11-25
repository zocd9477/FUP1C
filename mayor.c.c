#include<stdio.h>

int num[10];
int i;
int mayor=0;
int may=0;
int k=11;

int main()
{
	for(i=0;i<10;i++)
	{
		printf("Dame un numero\n");
		scanf("%d",&num[i]);
		if(num[i]>mayor)
		{
			mayor=num[i];
		}
	}
	printf("El numero mayor es; %d\n",mayor);
}
