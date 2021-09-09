#ifndef PRINTS_H
#define PRINTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tablero.h"
#include "Jugador.h"
#include "Juego.h"

void visualizarTablero(Tablero* tablero);
void visualizarTableroCorrecto(Tablero*tablero);
void visualizarMovimientosPosibles(Tablero *tablero);
void visualizarPartida(Tablero*tablero,Jugador*jugador);
void visualizarJugador(Jugador* jugador);

#endif /* PRINTS_H */

