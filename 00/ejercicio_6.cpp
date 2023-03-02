#include <stdio.h>

/*
  Ejercicio 6 Ordenar arreglo
    Escriba una función que recibe un arreglo de enteros y devuelve un nuevo arreglo que contiene a los elementos del primero en orden ascendente. Indique qué algoritmos de ordenación utiliza.
*/

void insertionSort(int arr[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int tam = 5;
  int arr[tam] = { 1, 2, 3, 4, 5 };
  insertionSort(arr, tam);
  printf("%d - %d - %d - %d - %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
  return 0;
}