#include <stdio.h>

/*
  Ejercicio 5 Insertar Punto
    Los siguientes tipos definen los conceptos punto y colección de puntos.

    -> (DEFINICIONES ABAJO)

    La colección se representa con un arreglo con tope.
    Implemente una función que inserte un punto en una colección de puntos:

    -> (HEADER)  void insertarPunto ( ColPuntos & colPtos , Punto pto ) ;

    La colección está ordenada y debe quedar así después de la inserción.
    El orden es tal que para cada par de puntos el que tenga menor coordenada X precede al otro, y si esas coordenadas son iguales el que tenga menor coordenada Y precede al otro (orden lexicográfico).
    Si la cantidad de puntos es igual a la capacidad del arreglo la operación no tiene efecto
*/

typedef struct rep_punto {
  int coordX, coordY;
} Punto;

typedef struct rep_colPuntos {
  int capacidad;
  int cantidad;
  Punto* arregloPuntos;
} ColPuntos;

void insertarPunto(ColPuntos& colPtos, Punto pto) {
  if (colPtos.cantidad < colPtos.capacidad) {
    int i = colPtos.cantidad - 1;
    while (i >= 0 && (colPtos.arregloPuntos[i].coordX > pto.coordX || (colPtos.arregloPuntos[i].coordX == pto.coordX && colPtos.arregloPuntos[i].coordY > pto.coordY))) {
      colPtos.arregloPuntos[i + 1] = colPtos.arregloPuntos[i];
      i--;
    }
    colPtos.arregloPuntos[i + 1] = pto;
    colPtos.cantidad++;
  }
}

void mostrarColeccion(ColPuntos& colPtos) {
  for (int i = 0; i < colPtos.cantidad; i++) {
    printf("\nPUNTO %d\n x: %d\n y: %d\n", i, colPtos.arregloPuntos[i].coordX, colPtos.arregloPuntos[i].coordY);
  }
}



int main() {
  int TOPE = 3;
  ColPuntos coleccion = { TOPE,0,new Punto[TOPE] };

  for (int i = 0; i < TOPE; i++) {
    Punto punto;
    printf("\n** NUEVO PUNTO **");
    printf("\nx : ");
    scanf("%d", &punto.coordX);
    printf("y : ");
    scanf("%d", &punto.coordY);
    insertarPunto(coleccion, punto);
  }

  mostrarColeccion(coleccion);

  delete[] coleccion.arregloPuntos;
  return 0;
}