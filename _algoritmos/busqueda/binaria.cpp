#include <stdio.h>

/*
  Precondicion: El arreglo debe estar ordenado de menor a mayor

  En la busqueda binaria se busca el elemento en el arreglo de forma recursiva.
  La idea es dividir el arreglo en dos partes y buscar el elemento en la mitad.
  - Si el elemento es menor que el elemento de la mitad, se busca en la primera mitad.
  - Si el elemento es mayor que el elemento de la mitad, se busca en la segunda mitad.
  - Si el elemento es igual al elemento de la mitad, se retorna la posicion de la mitad.

  EJ: 1,2,3,4,5,6,7 (Buscar el elemento 3)
  1. Se divide el arreglo en dos partes, la primera mitad es 1,2,3,4 y la segunda mitad es 5,6,7
  2. Como el elemento 2 es menor que el elemento de la mitad (4), se busca en la primera mitad (1,2,3,4)
  3. Se divide el arreglo en dos partes, la primera mitad es 1,2 y la segunda mitad es 3,4
  4. Como el elemento 3 es mayor que el elemento de la mitad (2), se busca en la segunda mitad (3,4)
  5. Se divide el arreglo en dos partes, la primera mitad es 3 y la segunda mitad es 4
  6. Como el elemento 3 es igual al elemento de la mitad (3), se retorna la posicion de la mitad (2)
*/

int busquedaBinaria(int arreglo[], int tope, int elementoABuscar) {
  int posicion = -1; // -1 indica que no se encontró el elemento
  int inicio = 0; // El inicio del arreglo es 0
  int fin = tope - 1; // El fin del arreglo es el tope - 1
  int mitad = (inicio + fin) / 2;

  while (inicio <= fin) {
    if (arreglo[mitad] == elementoABuscar) {
      posicion = mitad;
      break;
    } else if (arreglo[mitad] < elementoABuscar) {
      inicio = mitad + 1; // La mitad ya la revisamos
    } else {
      fin = mitad - 1; // La mitad ya la revisamos
    }
    mitad = (inicio + fin) / 2; // Calculamos la nueva mitad
  }

  return posicion;
}

int main() {
  int arregloOrdenado[10] = { 1,2,3,4,5,6,7,8,9,10 };
  int elementoABuscar = 6;

  int posicion = busquedaBinaria(arregloOrdenado, 10, elementoABuscar);
  if (posicion != -1) {
    printf("El elemento %d se encuentra en la posición %d del arreglo\n", elementoABuscar, posicion);
  } else {
    printf("El elemento %d no se encuentra en el arreglo\n", elementoABuscar);
  }
}