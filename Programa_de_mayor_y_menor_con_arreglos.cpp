#include <stdio.h>
#include <stdlib.h>

int arreglo[10];
int i;
int mayor=0;
int j;
int masGrande=60000;
int menor=0;




int main ()
{
	
	for (i=0;i<10;i++)
	{
		printf ("dame un numero:\n");
		scanf("%d",&arreglo[i]);
	}
	//for(j=0;j<2;j++)
	//{
		mayor=arreglo[0];
		menor=arreglo[0];
	for(i=0;i<10;i++)
	{
		if (arreglo[i]>mayor)
		{
			mayor=arreglo[i];
		}
		if (arreglo[i]<menor) 
		{ 
			menor=arreglo[i];  
		} 
	}
	printf("El numero mayor es: %d \n\n",mayor);
	printf("El numero menor es: %d \n",menor);
	//masGrande=mayor;

	//}
	system("pause");
	return 0;
}
