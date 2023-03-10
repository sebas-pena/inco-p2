#include "../include/distancia.h"
#include <math.h>
#include <stdio.h>
/* calcula cuadrados */
double sqr(double x) {
  return x * x;
}

/* Devuelve la distancia entre dos puntos */
double distancia(Punto p1, Punto p2) {
  return sqrt(sqr(coordX(p1) - coordX(p2)) + sqr(coordY(p1) - coordY(p2)));
}

/* Imprime la distancia entre tres puntos  */
void distanciaTresPuntos(Punto p1, Punto p2, Punto p3) {
  printf("P1 - P2: %f\n", distancia(p1, p2));
  printf("P1 - P3: %f\n", distancia(p1, p3));
  printf("P2 - P3: %f\n", distancia(p2, p3));
}