#include "./include/distancia.h"

int main() {
  Punto p1 = crearPunto(3, 5.5);
  Punto p2 = crearPunto(0, 9.5);
  Punto p3 = crearPunto(-2, 17.5);

  distanciaTresPuntos(p1, p2, p3);

  liberarPunto(p1);
  liberarPunto(p2);
  liberarPunto(p3);
  return 0;
}