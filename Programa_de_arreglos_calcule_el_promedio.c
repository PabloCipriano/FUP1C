#include <stdio.h>

int cal[10];
int n;
int i;
int suma=0;
float prom;
int main ()
{
	
	for (i=0;i<10;i++)
	{
		printf("Calificacion %d: \n",(i+1));
		scanf ("%d",&cal[i]);
		suma=suma+cal[i];
	}
	prom=(float)suma/10;
	printf("El promedio general es: %f \n",prom);
	
}
