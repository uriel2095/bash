#include <stdio.h>
#include <stdlib.h>
int tamano (char *);

int tamano(char *cadena)
{
int i;
int j;
	
	for(i=0;i< *cadena;i++){
		j= 0;
		while(*(cadena+j) != '\0')
	{
	  	j++;
	
	}
	
}
	printf("%d \n ",j);	
	

}

int  main ()
{
//	char cadena[]="holamundo";
//	char *tam;
//	int letras = 0;
	
//	tam = cadena;
//	while (*tam != '\0')
//	{
//		if(*tam =='h' ) 
//		letras++;
//		tam++;
//	}
	char cadena1[50];
	printf("\nIngresa su palabra \n");
	fflush(stdin);
	scanf("%s",cadena1);
	printf("tu palabra tiene estos caracteres:\n");
	tamano(cadena1);
}
