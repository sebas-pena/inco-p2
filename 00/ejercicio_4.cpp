#include <stdio.h>
#include <string.h>
/*

Ejercicio 4 Es Palíndrome
  Considere ahora que la frase se representa como un arreglo de caracteres implementado como char *frase.

  (a) ¿Qué diferencias hay entre esta representación y la que utilizó en el Ejercicio 3?
  (b) Escriba una función EsPalindrome que recibe una frase representada como un puntero a char y devuelve TRUE si la misma es un palíndrome, FALSE en otro caso.
*/

/*
  a ) la diferencia es es que el primero es un puntero de tipo carácter que se puede usar para apuntar a una cadena de caracteres, en el ejercicio 3 es un array de caracteres de tamano fijo.
*/

bool esPalindrome(char* frase) {
  int largo = strlen(frase) - 2;
  bool esPal = true;

  for (int i = 0; i < largo / 2; i++) {
    printf("%c -- %c \n", frase[i], frase[largo - i + 1]);
    if (frase[i] != frase[largo - i + 1]) esPal = false;
  }

  return esPal;
}

int main() {
  char* frase = new char[100];
  printf("INGRESE UNA FRASE: ");
  scanf("%s", frase);

  int esPal = esPalindrome(frase);
  if (esPal) printf("Es palindrome.");
  else printf("No es palindrome.");

  delete[] frase;
  return 0;
}