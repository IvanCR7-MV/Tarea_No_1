#include <stdio.h>

int main(void){

    int numero;
    int numero_2;

    printf("Asigne un valor para a: ");
    scanf("%d",&numero);

    printf("Asigne un valor para b: ");
    scanf("%d",&numero_2);

if(numero>numero_2) {
    printf("La variable a es mayor que b");
}

else {
    printf("La variable b es mayor que a");

}

    getch();

}
