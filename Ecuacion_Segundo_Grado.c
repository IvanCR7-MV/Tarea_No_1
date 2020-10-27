#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c,D,Y,X1,X2;
    printf("Una ecuacion de segundo grado se representa de la forma AX^2 + BX + C\n");
    printf("Donde A, B y C son los coeficientes de la ecuacion\n");
    printf("Asigne un valor para A: ");
    scanf("%f",&a);
    printf("Asigne un valor para B: ");
    scanf("%f",&b);
    printf("Asigne un valor para C: ");
    scanf("%f",&c);
{
D=((b*b)-4*a*c);
X1= (-b+Y)/(2*a);
X2= (-b-Y)/(2*a);
printf("Las raices de la ecuacion de segundo grado son %.2f y %.2f\n",X1,X2);
}

getch();

}
