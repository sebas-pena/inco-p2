#include <stdio.h>
/*
  De menor a mayor
*/
void insertionSort(int arreglo[], int tope) {
  /*
    En el ordenamiento por insercion se recorre el arreglo desde la posición 1 hasta el final, en cada iteracion se toma el elemento en la posición i y se compara con los elementos anteriores.

    Si el elemento en la posición i es menor que el elemento en la posición j, se intercambian los elementos.

    Recursivamente se compara el elemento en la posición i con los elementos anteriores hasta que se encuentra un elemento menor o se llega al inicio del arreglo.

    EJ: 1,3,2

    1. El elemento en la posición 0 se considera ordenado. (1,3,2)
    2. Se toma el elemento en la posición 1 (3) y se compara con el elemento en la posición 0 (1). Como 3 es mayor que 1, no se intercambian los elementos. (1,3,2)
    3. Se toma el elemento en la posición 2 (2) y se compara con el elemento en la posición 1 (3). Como 2 es menor que 3, se intercambian los elementos. (1,2,3)
    4. Se toma el elemento en la posición 2 (3) y se compara con el elemento en la posición 0 (1). Como 2 es mayor que 1, no se intercambian los elementos. (1,2,3)

    Al finalizar el algoritmo el arreglo queda ordenado. (1,2,3)
  */

  for (int i = 1; i < tope; i++) {
    // Se guarda el elemento en la posicion i
    int actual = arreglo[i];
    int j = i - 1;

    while (j >= 0 && arreglo[j] > actual) {
      // Si el elemento anterior es mayor al actual se dezplaza el elemento anterior a la derecha
      arreglo[j + 1] = arreglo[j];
      j--;
    }

    // Se inserta el elemento actual en la posicion j + 1 (j es la posicion del elemento menor al actual)
    arreglo[j + 1] = actual;
  }
}


int main() {
  int arregloDesordenado[10] = { 10,9,8,7,6,5,4,3,2,1 };
  insertionSort(arregloDesordenado, 10);

  for (int i = 0; i < 10; i++) {
    printf("Posicion: %d : %d\n", i, arregloDesordenado[i]);
  }
  printf("\n");
}