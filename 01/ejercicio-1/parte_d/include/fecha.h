typedef struct rep_fecha* TFecha;
/* Devuelve un 'TFecha ' con dia d, mes m y año a */
TFecha crear_fecha(unsigned int d, unsigned int m, unsigned int a);
/* Devuelve true si f1 es anterior a f2 , false en otro caso */
bool comparar_fechas(TFecha f1, TFecha f2);
/* Devuelve el día correspondiente a fecha */
unsigned int dia(TFecha fecha);
/* Devuelve el mes correspondiente a fecha */
unsigned int mes(TFecha fecha);
/* Devuelve el año correspondiente a fecha */
unsigned int anio(TFecha fecha);

void liberar_fecha(TFecha& fecha);