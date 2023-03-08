#include <stdio.h>


/*
  En la busqueda secuencial se recorre el arreglo desde el inicio hasta que se encuentra el elemento o se llega al final del arreglo.
  Una vez que se encuentra el elemento se retorna la posicion en la que se encuentra, si no se encuentra se retorna -1.
*/

int busquedaSecuencial(int arreglo[], int tope, int elementoABuscar) {
  int posicion = -1;

  for (int i = 0; i < tope; i++) {
    if (arreglo[i] == elementoABuscar) {
      posicion = i;
      break;
    }
  }

  return posicion;
}

int main() {
  int arregloOrdenado[10] = { 1,2,3,4,5,6,7,8,9,10 };
  int elementoABuscar = 6;

  int posicion = busquedaSecuencial(arregloOrdenado, 10, elementoABuscar);
  if (posicion != -1) {
    printf("El elemento %d se encuentra en la posición %d del arreglo\n", elementoABuscar, posicion);
  } else {
    printf("El elemento %d no se encuentra en el arreglo\n", elementoABuscar);
  }
}