//Tipos de variables int, float, char, long, double
#include<stdio.h>

int N1;
int N2;
int resultado;

int main ()
{//inicio
	printf("Dame un numero: ");
	scanf("%d",&N1);
	printf("Dame un numero: ");
	scanf("%d",&N2);
	resultado=N1+N2;
	printf("El resultado  %d + %d es: %d\n",N1,N2,resultado);

}//fin
