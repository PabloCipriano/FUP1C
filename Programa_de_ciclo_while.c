#include <stdio.h>

int num;
int i;
int main ()
{
	printf ("Dame un numero \n");
	scanf("%d",&num);
	i=1;
	while (i<=num)
	{
		printf("los numeros son los siguientes %d \n",i);
		i=i+1;
	}
}
