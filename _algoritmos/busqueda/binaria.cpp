#include <stdio.h>

int busquedaBinaria(int arreglo[], int tope, int elementoABuscar) {
  int posicion = -1; // -1 indica que no se encontró el elemento
  int inicio = 0;
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