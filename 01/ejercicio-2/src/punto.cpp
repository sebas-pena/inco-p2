#include "../include/punto.h"

struct rep_punto {
  double x;
  double y;
};

Punto crearPunto(double x, double y) {
  return new rep_punto{ x,y };
}

double coordX(Punto punto) {
  return punto->x;
}

double coordY(Punto punto) {
  return punto->y;
}

void liberarPunto(Punto& punto) {
  delete punto;
  punto = nullptr;
}