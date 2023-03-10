#include <stdio.h>

struct rep_fecha {
  unsigned int d;
  unsigned int m;
  unsigned int a;
};

/*
  Dada la representación de fecha

  a)Implemente una función main() que inicialice un arreglo de fechas
  (por ejemplo, con las fechas 10/10/2022,15/5/2022 y 20/11/1992), lo ordene e imprima el resultado

*/

int compararFechas(rep_fecha fecha1, rep_fecha fecha2) {

  if (fecha1.a > fecha2.a) return 1;
  else if (fecha1.a < fecha2.a) return -1;
  else {
    if (fecha1.m > fecha2.m) return 1;
    else if (fecha1.m < fecha2.m) return -1;
    else {
      if (fecha1.d > fecha2.d) return 1;
      else if (fecha1.d < fecha2.d) return -1;
      else return 0;
    }
  }

}

void imprimirFecha(rep_fecha fecha) {
  printf("%d/%d/%d\n", fecha.d, fecha.m, fecha.a);
}

void imprimirFechas(rep_fecha fechas[], int tope) {
  for (int i = 0; i < tope; i++) {
    printf("Fecha %d: ", i + 1);
    imprimirFecha(fechas[i]);
  }
}

void ordenarFechas(rep_fecha fechas[], int tope) {
  for (int i = 1; i < tope; i++) {
    int j = i - 1;
    rep_fecha fechaAux = fechas[i];
    imprimirFecha(fechaAux);

    while (j >= 0 && compararFechas(fechaAux, fechas[j]) == -1) {
      fechas[j + 1] = fechas[j];
      j--;
    }
    fechas[j + 1] = fechaAux;
  }
}

int main() {

  rep_fecha fechas[] = { {15,15,2002}, {10,10,2003},{15,15,2001},{20,11,1992} };
  int tope = 4;

  ordenarFechas(fechas, tope);
  imprimirFechas(fechas, tope);

  return 0;
}