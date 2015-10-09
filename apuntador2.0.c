#include<stdio.h>



void porOrden(int *arreglo, int tam)
{
	int i = 0;
	for(i = 0;i<=tam;i++)


		 printf("arreglo[%d] = %d \n",i,*(arreglo+i));
}
void burbuja (int *arreglo,int tam)
{
	int i=0;
	int j=0;
	int aux=0; 
	for(i=0;i<tam;i++){
	for(j=0;j<tam ;j++){
		 if(*(arreglo+i) >  *(arreglo+j)){
			aux =  *(arreglo+i) ;
			*(arreglo+i) = *(arreglo+j);
			*(arreglo+j) = aux;

//			printf("arreglo [%d]= %d \n",i,*(arreglo+(i+j)));

			}
		}
	}
}
void ordenado(int *arreglo, int tam)
{
	int i=0;
	int j=0;
	int aux=0;
	for(i=0;i<tam;i++){
	for(j=0;j<tam;j++){
		if(*(arreglo+i) < * (arreglo+j)){
			aux= *(arreglo+i);
			*(arreglo+i) = *(arreglo+j);
			*(arreglo+j) = aux;
			}
		}
	}
}
int main ()
{
	int arreglo [10];
	arreglo[0]= 2;
	arreglo[1]= 4;
	arreglo[2]= 6;
	arreglo[3]= 1;
	arreglo[4]= 3;
	arreglo[5]= 6;
	arreglo[6]= 7;
	arreglo[7]= 9;
	arreglo[8]= 8;
	arreglo[9]= 0;
	
	porOrden(arreglo,9);
	burbuja(arreglo,9);
	printf("\narreglo correcto  1 \n \n");
	porOrden(arreglo,9);
	printf("\narreglo correcto  2 \n \n");
	ordenado(arreglo,9);
	porOrden(arreglo,9);

	//printf("posicion 1 %d\n",*ptr);	
	
//	for(i=0;i<10;i++)
//{
//		printf("Arreglo [%d]= %d \n",i,(ptr[i]));
//}
}

