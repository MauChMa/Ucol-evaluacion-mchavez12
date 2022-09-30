#include <stdio.h>
//Chavez Mancilla Mauricio 3-D Evaluacion de estructura de datos, profesor Navarro Alvarez UCOL - FIE - Ingenieria en software
int recur(int);
int razon=3;
int res;

int main()
{
	int i;
	int nElementos;
	int nInicial=5;
	printf("Ingrese hasta que termino quiere conocer la secuencia: ");
	scanf("%d",&nElementos);  
	printf("\nPrimer termino: %d \n",nInicial);
	printf("\nResto de terminos: ");
	
	
	for(i=0; i<=nElementos; i++)
	{
		printf("%d, ",recur(nInicial));
		nInicial=res;
	}
	return 0;
}
int recur(int nInicial)
{

	if(nInicial>0)
	{
		return res=nInicial*razon;
	}
	else
	{
	    return 1;    
	}
}
