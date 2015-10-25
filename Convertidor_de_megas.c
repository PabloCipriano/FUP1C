//Pseudocodigo que convierte de megas a bits, bytes, kilobytes, gigabytes y terabytes.
#include <stdio.h>


int N1;
int bits;
int bytes;
int kilo;
float giga;
float tera;



int main ()
{
    printf("Dame el numero de Megabytes que deseas convertir:\n");
    scanf ("%d",&N1);

    bits=8*1024*N1;
    bytes=1024*1024*N1;
    kilo=1024*N1;
    giga=(float)N1/1024;
    tera=(float)N1/148576;
    printf("El resultado en bits es: %d\n",bits);
    printf("El resultado en bytes es: %d\n",bytes);
    printf("El resultado en Kilobytes es: %d\n",kilo);
    printf("El resultado en Gigabytes es: %f\n",giga);
    printf("El resultado en Terabytes es: %f\n",tera);
}
