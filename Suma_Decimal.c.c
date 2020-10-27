#include <stdio.h>

int main() {

    float a = 456.98;
    float b = 231.4;

    printf("La suma de 456.98 y 231.4 se interpreta de la siguiente manera:\n");

    float suma = a + b;

    printf("456.98 + 231.4 = %.2f\n",suma);

    printf("Asi que el resultado de la suma es: %.2f",suma);

    getch();
}
