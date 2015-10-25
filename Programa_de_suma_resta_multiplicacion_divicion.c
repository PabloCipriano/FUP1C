//Algoritmo de Operaciones 
#include<stdio.h>

int N1;
int N2;
int suma;
int resta;
int multi;
float divi;

int main ()
{//inicio
	printf("Dame un numero: ");
	scanf("%d",&N1);
	printf("Dame otro numero: ");
	scanf("%d",&N2);
	suma=N1+N2;
	resta=N1-N2;
	multi=N1*N2;
	divi=(float)N1/N2;
	
	printf("El resultado  %d + %d es: %d\n",N1,N2,suma);
	printf("El resultado  %d - %d es: %d\n",N1,N2,resta);
	printf("El resultado  %d * %d es: %d\n",N1,N2,multi);
	printf("El resultado  %d / %d es: %f\n",N1,N2,divi);
}
