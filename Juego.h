#ifndef JUEGO_H
#define JUEGO_H
#include "Jugador.h"
#include "Tablero.h"
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

typedef struct Juego{
    Tablero *tablero;
    Jugador *jugador;
}Juego;

void inicializarJuego(Tablero* tablero,int filas,int columnas);
void inicializarJugador(char nombre[15]);
void realizarMovimiento(Tablero*tablero);
#endif /* JUEGO_H */

