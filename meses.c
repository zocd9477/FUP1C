#include<stdio.h>
#include<stdlib.h>



int  mes;

int  main()

{
     printf("Ingresa el número del mes que deseas saber");
 	scanf("%d",&mes);
	
switch(mes)
{
	
	case 1:{
			printf("1-enero");	
	
	}break;
	
		case 2:{
			printf("2-febrero");	
	
	}break;
		case 3:{
			printf("3-marzo");	
	
	}break;
	
		case 4:{
			printf("4-abril");	
	
	}break;
		case 5:{
			printf("5-mayo");	
	
	}break;
	
		case 6:{
			printf("6-junio");	
	
	}break;
		case 7:{
			printf("7-julio");	
	
	}break;
	
		case 8:{
			printf("8-agosto");	
	
	}break;
			case 9:{
			printf("9-septiembre");	
	
	}break;
	
		case 10:{
			printf("10-octubre");	
	
	}break;
		case 11:{
			printf("11-noviembre");	
	
	}break;
	
		case 12:{
			printf("12-diciembre");	
	
	}break;
	
	
	default:{ printf("Error");
}
}

	
	
	
system("pause");	
}
