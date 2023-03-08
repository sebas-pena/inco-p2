#include <stdio.h>
/*
  De menor a mayor
 */
void selectionSort(int arreglo[], int tope) {

  /*
    En cada iteracion se busca el menor elemento del arreglo y se intercambia con el elemento en la posicion i
    Ej: 10,9,8,7,6,5,4,3,2,1
    1. Se busca el menor elemento del arreglo, en este caso es 1, y se intercambia con el elemento en la posicion 0
    2. Se busca el menor elemento del arreglo, en este caso es 2, y se intercambia con el elemento en la posicion 1
    ...
  */

  for (int i = 0; i < tope; i++) {
    int posicionMenor = i;
    for (int j = i + 1; j < tope; j++) {
      if (arreglo[j] < arreglo[posicionMenor]) {
        posicionMenor = j;
      }
    }
    int aux = arreglo[i];
    arreglo[i] = arreglo[posicionMenor];
    arreglo[posicionMenor] = aux;
  }
}

int main() {
  int arregloDesordenado[10] = { 10,9,8,7,6,5,4,3,2,1 };
  selectionSort(arregloDesordenado, 10);

  for (int i = 0; i < 10; i++) {
    printf("Posicion: %d : %d\n", i, arregloDesordenado[i]);
  }
  printf("\n");
}