#include "../include/fecha.h"


struct rep_fecha {
  unsigned int f;
};

TFecha crear_fecha(unsigned int d, unsigned int m, unsigned int a) {
  return new rep_fecha{ a * 10000 + m * 100 + d };
};

/* Devuelve true si f1 es anterior a f2 , false en otro caso */
bool comparar_fechas(TFecha f1, TFecha f2) {
  return f1->f < f2->f;
};

unsigned int dia(TFecha fecha) {
  return fecha->f % 100;
};

unsigned int mes(TFecha fecha) {
  return (fecha->f % 10000) / 100;
};

unsigned int anio(TFecha fecha) {
  return fecha->f / 10000;
};

void liberar_fecha(TFecha& fecha) {
  delete fecha;
  fecha = nullptr;
}
