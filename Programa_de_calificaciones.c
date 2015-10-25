#include <stdio.h>

int edad;

int main ()
{
	printf("introduce tu edad\n");
	scanf("%d", &edad);
	printf("Tu edad es: %d\n", edad);
	if (edad >= 0 && edad<= 2)
	{
		printf("Estas en la etapa de bebe\n");
	}
	if (edad >= 3 && edad<= 12)
	{
		printf("estas en la etapa de ninio\n");
	}
	if (edad >= 13 && edad<= 18)
	{
		printf("Estas en la etapa de adolecente\n");
	}
	if (edad >= 19 && edad<= 29)
	{
		printf("Estas en la etapa de joven\n");
	}
	if (edad >= 30 && edad<= 59)
	{
		printf("Estas en la etapa de adulto\n");
	}
	if (edad >= 60)
		{
			printf("Eres un adulto mayor");
		}
}
