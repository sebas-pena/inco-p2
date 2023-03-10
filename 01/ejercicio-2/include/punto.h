// punto .h
# ifndef _PUNTO_H
# define _PUNTO_H
/* Representaci ón de Punto */
typedef struct rep_punto* Punto;
/* Operaciones de Punto */

/* Devuelve un 'Punto ' de coordenadas 'x' e 'y '. */
Punto crearPunto(double x, double y);

/* Devuelve la coordenada 'x' de 'punto '. */
double coordX(Punto punto);

/* Devuelve la coordenada 'y' de 'punto '. */
double coordY(Punto punto);

/* EXTRA */
void liberarPunto(Punto& punto);

# endif