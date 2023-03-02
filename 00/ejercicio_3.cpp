#include <stdio.h>

/*
  Ejercicio 3 Ocurrencias
    Se quiere implementar una función que cuente la cantidad de veces que una letra aparece en una frase.
    La frase se representa como un arreglo de caracteres, y dado que se conoce que el largo máximo de
    una frase es de 100 caracteres, la frase se implementa como char frase[100]. Usando esta representación
    escriba una función Ocurrencias que recibe una frase, un natural llamado largo que representa el número
    de caracteres en la frase, y el caracter a buscar (almacenado en la variable letra), y devuelve el número de
    ocurrencias del carácter letra en el arreglo frase.
*/

int ocurrencias(char frase[100], char caracter, int largo) {
  int contador = 0;

  for (int i = 0; i < largo; i++) {
    if (frase[i] == caracter) contador++;
  }

  return contador;
}

int main() {
  char frase[100], caracter;
  int largoFrase;

  /* o */
  printf("INGRESE EL CARACTER A BUSCAR: ");
  scanf("%c", &caracter);

  /* 15 */
  printf("INGRESE EL LARGO: ");
  scanf("%d", &largoFrase);

  /* el_viento_sopla*/
  printf("INGRESE LA FRASE: ");
  scanf("%s", frase);

  /* 2 */
  int repeticiones = ocurrencias(frase, caracter, largoFrase);

  printf("La letra: '%c' se repite %d veces.", caracter, repeticiones);

  return 0;
}