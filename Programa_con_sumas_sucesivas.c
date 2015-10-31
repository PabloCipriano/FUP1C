#include <stdio.h>
int cont=0;
int i;
int num1;
int num2;
int main()
{
	printf ("dame un numero\n");
	scanf ("%d",&num1);
	printf ("dame otro numero\n");
	scanf ("%d",&num2);
	i=1;
	while (i<=num2)
	{
		cont=cont+num1;
		printf("+%d",num1,"");
		i=i+1;
	}
	printf("\nEl resultado es %d",cont);
}
