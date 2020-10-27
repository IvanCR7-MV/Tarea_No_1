#include <stdio.h>

int main(void) {
  int numero;
  printf("Escribe un numero: ");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("Es par");
  } else {
    printf("Es impar");
  }
  getch();
}
