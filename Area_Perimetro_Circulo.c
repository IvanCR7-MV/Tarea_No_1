#include <stdio.h>

void main()
{
float A,P,pi = 3.1416,r;

printf("El Area y Perimetro de una circunferencia se pueden calcular con la medida del Radio\n");
printf("Asigne un valor al radio de la circunferencia: ");
scanf("%f",&r);

A = pi*r*r;
P= 2.0*pi*r;

printf("El Area del circulo de radio %.2f es %.2f\n",r,A);

printf("El Perimetro del circulo de radio %.2f es %.2f",r,P);

getch();

}


