#ifndef TABLERO_H
#define TABLERO_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Tablero{
    int **tablero;
    int filas;
    int columnas;
}Tablero;

void inicializarTablero(Tablero* tablero,int filas,int columnas);
void llenarTablero(Tablero* tablero);
void moverPosicion(Tablero* tablero);
bool verificarPartida(Tablero* tablero);
bool validarMovimiento(Tablero* tablero);
void liberarMemoriaTablero(Tablero* tablero);
int calcularPuntaje(Tablero*tablero);
#endif /* TABLERO_H */

