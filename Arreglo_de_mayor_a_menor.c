#include <stdio.h>
#include <stdlib.h>

int arreglo[20];
int i;
int mayor=0;
int j;
int masGrande=60000;





int main ()
{
	
	for (i=0;i<20;i++)
	{
		printf ("dame un numero:\n");
		scanf("%d",&arreglo[i]);
	}
	for(j=0;j<20;j++)
	{
		mayor=arreglo[0];
	for(i=0;i<20;i++)
	{
		if (arreglo[i]>mayor && arreglo[i]<masGrande)
		{
			mayor=arreglo[i];
		}
		
	}
	
	printf("El numero mayor es: %d \n\n",mayor);
	masGrande=mayor;
		if (arreglo[i]==arreglo[i])
	{
		mayor=arreglo[i];
	}
	}
	
	system("pause");
	return 0;
}
