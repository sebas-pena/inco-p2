# include <stdio.h>

/*
  Ejercicio 2 Primos
    Escriba un procedimiento que calcule e imprima en pantalla todos los números primos entre dos enteros
    positivos A y B cualesquiera.
*/

int main() {
  int min, max;

  printf("Ingrese el minimo: ");
  scanf("%d", &min);
  printf("Ingrese el maximo: ");
  scanf("%d", &max);

  printf("\nMIN: %d | MAX: %d\n", min, max);

  for (int i = min; i <= max; i++) {
    bool esPrimo = true;
    int j = 1;

    while (j <= i / 2 && esPrimo) {
      if (i % j == 0 && j > 1) {
        esPrimo = false;
      } else j++;
    }

    if (esPrimo) printf("%d es primo \n", i);
  }

  return 0;
}