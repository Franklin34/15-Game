#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Prints.h"
#include "Tablero.h"
#include "Jugador.h"
#include "Juego.h"

typedef struct Menu{
    Juego juego;
}Menu;

void menuPrincipal(Juego juego);
void visualizarDatos(Juego juego);
void menuTablero(Juego juego);
Juego generarJuego();
void menuJugador(Juego juego);
void pedirPrimerosDatos();
void menuMovimientos(Tablero *tablero);

#endif /* MENU_H */

