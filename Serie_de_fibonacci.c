#include <stdio.h> //serie fibonacci
#include <stdlib.h>
 
int a[100];
int cont = 0;
int n;
int i;



 
int main()
{ 
	printf("			Serie de fibonacci\n");
    printf("ingresa un numero para mostrarte la serie");
    scanf("%d",&n);
	a[0] = 0;
    a[1] = 1;    
 
    for(i=1; i < n; i++)
	{
        a[i+1] = a[i-1] + a[i];
    }
 
 
    for(i=0; i < n; i++)
	{
 
        if (cont == 10)
		{ 
            
            cont = 0;           
 
        }
 
        printf ("%d\n", a[i]);
 
        cont += 1;  
 
    }
       
    printf("\n");
 system("pause");
}






