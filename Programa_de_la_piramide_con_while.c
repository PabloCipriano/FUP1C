#include<stdio.h>
#include<stdlib.h>

int i;
int numero1;
int numero2;
int j;
int aux;
int main()



{
	printf("   INGRESE  UN NUMERO  1    ");
	scanf("\n%d",&numero1);
	printf("   INGRESE  UN NUMERO  2    ");
	scanf("\n%d",&numero2);	
    	
            
                   i=numero1;
	
	                    while(i<=numero2){
	
                          aux=i;
        
	                      printf("   %d",aux,"   ");
                          printf("\n");
	                           i=i+1;	
	                        }
                      
                     
                      j=numero1;
                       
	                   while(j>=numero2){
	
                              
        
	                          printf("%d",j,"  ");
                                printf("\n"); 
                            j=j-1;	
	                         
                           
                           }           
                              
system("pause");
}
