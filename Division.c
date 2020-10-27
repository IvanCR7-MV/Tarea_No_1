#include <stdio.h>

void main(){

   float A;
   float B;

    printf("La division consta de un dividendo y un divisor\n");
    printf("Digite un dividendo: ");
    scanf("%f", &A);
    printf("Digite un divisor: ");
    scanf("%f", &B);

    float D = A/B;

    printf("El resultado de la Division es: %.2f", D);

    getch();

}
