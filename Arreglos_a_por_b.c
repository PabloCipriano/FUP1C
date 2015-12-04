#include<stdio.h>
#include<stdlib.h>
int A[10];
int B[10];
int C[10];
int i;
int j;
int cont=0;

int main()
{
	
    for(i=0;i<10;i++)
    
	{
		printf("-----------Ingresa los numeros del primer arreglo-----------\n");
       	scanf("%d",&A[i]);
       	
    }
    
    for(j=0;j<10;j++)
    
	{
		printf("-----------Ingresa los numeros del segundo arreglo-----------\n");
       	scanf("%d",&B[j]);
       	
    }
    printf("-----------Los resultados son: -----------\n");
    for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
	    	C[j]=A[i]*B[j];
			
		/*	if ( cont== 10)
			{ 
           		printf("--------------------------");
            	 cont = 0;           
 
       		}
        */
			
    		printf("%d * %d = %d\n",A[i],B[j],C[j]);
    	
    		
    	}
    }
		
	system("pause");
	
  } 
