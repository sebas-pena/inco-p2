#include <stdio.h>
#include "./include/fecha.h"

int main() {
  TFecha fechaMenor = crear_fecha(4, 5, 2002);
  TFecha fechaMayor = crear_fecha(5, 5, 2002);

  /* True */
  bool comp = comparar_fechas(fechaMenor, fechaMayor);
  printf("La primer fecha es: %s\n", comp ? "MENOR" : "MAYOR");
  printf("Fecha Mayor: %d/%d/%d\n", dia(fechaMayor), mes(fechaMayor), anio(fechaMayor));
  printf("Fecha Menor: %d/%d/%d\n", dia(fechaMenor), mes(fechaMenor), anio(fechaMenor));

  liberar_fecha(fechaMayor);
  liberar_fecha(fechaMenor);
  return 0;
}