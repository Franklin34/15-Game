#ifndef JUEGO_H
#define JUEGO_H
#include "Jugador.h"
#include "Tablero.h"
#include "Prints.h"
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")

typedef struct Juego{
    Tablero *tablero;
    Jugador *jugador;
}Juego;

void inicializarJuego(Tablero* tablero,int filas,int columnas);
void realizarMovimiento(Juego juego,char movimiento);
#endif /* JUEGO_H */

