#include "../include/fecha.h"

struct rep_fecha {
  unsigned int d;
  unsigned int m;
  unsigned int a;
};

TFecha crear_fecha(unsigned int d, unsigned int m, unsigned int a) {
  TFecha fecha = new rep_fecha;
  fecha->d = d;
  fecha->m = m;
  fecha->a = a;
  return fecha;
};

/* Devuelve true si f1 es anterior a f2 , false en otro caso */
bool comparar_fechas(TFecha f1, TFecha f2) {
  bool res = false;
  if (f1->a < f2->a) res = true;
  else if (f1->m < f2->m) res = true;
  else if (f1->d < f2->d) res = true;
  return res;
};

unsigned int dia(TFecha fecha) {
  return fecha->d;
};

unsigned int mes(TFecha fecha) {
  return fecha->m;
};

unsigned int anio(TFecha fecha) {
  return fecha->a;
};

void liberar_fecha(TFecha& fecha) {
  delete fecha;
  fecha = nullptr;
}
