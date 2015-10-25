//Tiendita
#include <stdio.h>
#include <stdlib.h>

int cant;
int cant2;
int cant3;
int cant4;
int cant5;
int num;
int menu;
int ganancias;
int papas;
int refre;
int jugo;
int choco;
int huates;


int main ()
{
    printf("Bienvenido a mi tiendita\n");
    printf("Presione 1 para ir a la venta\n");
    printf("Presione 2 para ver las ganancias\n");
    scanf("%d",&num);
    ganancias = 500;
    switch (num)
    {
           case 1:
                {
                     printf("Menu: \n");
                     printf("1.-Papas\n");
                     printf("2.-Refresco\n");
                     printf("3.-Jugo\n");
                     printf("4.-Chocolate\n");
                     printf("5.-Cacahuates\n");
                     scanf("%d",&menu);
                     switch (menu)
                     {
                     	case 1:
                     		{
                     			printf("Has comprado papitas\n");
                     			printf("Su precio es de $10\n");
                     			printf("Cuantas te se va a llevar?\n");
                     			scanf("%d",&papas);
                     			cant=papas*10;
                     			printf("Su total es de: $ %d",cant);
		                    }break;
		                case 2:
							{
   		   					    printf("Has comprado refresquito\n");
							    printf("Su precio es de $15\n");
							    printf("Cuantas te se va a llevar?\n");
                     			scanf("%d",&refre);
                     			cant2=refre*15;
                     			printf("Su total es de: $ %d",cant2);
               			   }break;
						case 3:
							{
								printf("Has comprado jugito\n");
								printf("Su precio es de $12\n");
								printf("Cuantas te se va a llevar?\n");
                     			scanf("%d",&jugo);
                     			cant3=jugo*12;
                     			printf("Su total es de: $ %d",cant3);
							}break;
						case 4:
							 {
							 	printf("Has comprado chocolatito\n");
							 	printf("Su precio es de $18\n");
							 	printf("¿Cuantas te se va a llevar?\n");
                     			scanf("%d",&choco);
                     			cant4=choco*18;
                     			printf("Su total es de: $ %d",cant4);
							 }break;
						case 5:
							{
								printf("Has comprado cacahuatitos\n");
								printf("Su precio es de $8\n");
								printf("¿Cuantas te se va a llevar?\n");
                     			scanf("%d",&huates);
                     			cant5=huates*8;
                     			printf("Su total es de: $ %d",cant5);
							}break;
						default :
						{
							printf("Caracter invalido");
						}	
					 }
                }break;
           case 2:
            	{
            		printf("Las ganancias totales son: $%d",ganancias);
				}break;
			default :
			{
				printf("!!!!error¡¡¡¡");
				}	
    }
}
