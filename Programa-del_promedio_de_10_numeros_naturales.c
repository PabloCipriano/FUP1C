#include <stdio.h>

int num=10;
int cont=0;
int prom;
int i;

int main ()
{
	
	while(i<=9)
	{
		cont=cont+num;
		prom=cont/num;
		i=i+1;
	}
	printf ("promedio es %d\n",prom);
}
























