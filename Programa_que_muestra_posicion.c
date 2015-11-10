#include <stdio.h>

int num;
int num2;
int i;
int j;
int suma;
int opc;
int sobra;
int num3;


int main()
{
	printf("ingrese una cantidad de 4 digitos\n");	
	scanf("%d",&num2);
    num=num2;
    i=0;
    do{
    	suma=num2/10;
    	num2=suma;    
    	i=i+1;
    }while(num2 != 0);
    switch(i)
		{
            case 1 :
				{
                    printf(" ingrese la  posicion  \n ");   
                    scanf("%d",&opc);
                    switch(opc)
					{
                    	case 1:
							{
                            	printf(" %d",num);
                        	}break;
                    	default:
							{
								printf("es solo una opcion ");
							}
                	}
                }break;
            case 2 :
				{
                    printf(" ingrese la  posicion\n");
                    scanf("%d",&opc);
                    switch(opc)
					{
                        case 1:
						{
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                            }while(num != 0);
		                    printf("%d",sobra);
                        }break;
                        case 2:
						{
                            j=0;
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                                j=j+1;
		                    }while((num != 0)&&(j != 1));
		                    printf("\n %d",sobra);
                        }break;
                        defaut:
						{
							printf("solo son 2 opciones");
						}
                    }      
                }break; 
            case 3 :
				{
                    printf(" ingrese la  posicion  \n ");
                    scanf("%d",&opc);
                    switch(opc)
					{
                        case 1:
						{
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                            }while(num != 0);
		                    printf("%d",sobra);
                        }break;
                        case 2:
						{
                            j=0;
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                                j=j+1;
		                    }while((num != 0)&&(j != 2));
		                    printf("%d",sobra);
                        }break;
                        case 3:
						{
                            j=0;
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                                j=j+1;
		                    }while((num != 0)&&(j != 1));
		                    printf("%d",sobra);
                        }break;
                        default:
						{
							printf("son solo 3 opciones");
						}
                    }
                }break;
            case 4 :
				{
                    printf("ingrese la  posicion\n");
                    scanf("%d",&opc);
                    switch(opc)
					{
                        case 1:
						{
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                        	}while(num != 0);
		                    printf("el numero es: %d",sobra);
                        }break;
                        case 2:
						{
                            j=0;
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                                j=j+1;
		                    }while((num != 0)&&(j != 3));
		                    printf("el numero es: %d",sobra);
                        }break;
                        case 3:
						{
                            j=1;
                            do{
                        	    sobra=num%10;
         	                	num3=num/10;
                            	num=num3;
                            	j=j+1;
		                    }while((num != 0)&&(j != 3));
		                    printf("el numero es: %d",sobra);
                        }break;
                        case 4: 
						{
                            j=2; 
                            do{
                                sobra=num%10;
         	                    num3=num/10;
                                num=num3;
                                j=j+1;
		                    }while((num != 0)&&(j != 3));
		                    printf("el numero es: %d",sobra);
                        }break;
                        default:
                        {
                        	printf("caracter invalido XC");
                        }
                    }
                }break;  
                         default:
						{
						 	printf("solo son cuatro digitos");
                        }
    	}
}
