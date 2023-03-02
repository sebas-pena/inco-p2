# include <stdio.h>

/*
  Ejercicio 1 Promedio clase

    Suponga que a los estudiantes de programación 2 se les dice que su calificación final será el promedio de
    las cuatro calificaciones más altas de entre las cinco que hayan obtenido en el curso.

    (a) Escribir una función llamada PromClase con cinco parámetros de entrada (las calificaciones obtenidas)

    que realice dicho cálculo y lo devuelva.

    (b) Escribir un programa principal (main ()) que permita ejecutar la función PromClase. Dicho programa
    deberá leer de la entrada estándar (teclado) 5 calificaciones, invocar al procedimiento PromClase con
    dichos parámetros, y finalmente mostrar en la salida estándar (pantalla) el resultado.
*/

void promClase(int n1, int n2, int n3, int n4, int n5) {
  int min = n1;
  if (min > n2) min = n2;
  if (min > n3) min = n3;
  if (min > n4) min = n4;
  if (min > n5) min = n5;

  float prom = (n1 + n2 + n3 + n4 + n5 - min) / 4;
  printf("El promedio es: %f\n", prom);
}

int main() {
  int n1, n2, n3, n4, n5;
  printf("Introduce 5 numeros:\n");
  scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
  promClase(n1, n2, n3, n4, n5);
  return 0;
}