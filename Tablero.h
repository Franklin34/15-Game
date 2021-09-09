#ifndef TABLERO_H
#define TABLERO_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define JUGADOR 16

typedef struct Tablero{
    int **tablero;
    int filas;
    int columnas;
}Tablero;

void inicializarTablero(Tablero* tablero,int filas,int columnas);
void llenarTablero(Tablero* tablero);
void moverPosicion(Tablero* tablero);
bool verificarRepetido(Tablero* tablero,int num);
bool verificarPartida(Tablero* tablero);
int* retornarMovimientosPos(Tablero* tablero);
bool validarMovDerecha(Tablero*tablero);
bool validarMovIzquierda(Tablero*tablero);
bool validarMovAbajo(Tablero*tablero);
bool validarMovArriba(Tablero*tablero);
void liberarMemoriaTablero(Tablero* tablero);
int calcularPuntaje(Tablero*tablero);
#endif /* TABLERO_H */

