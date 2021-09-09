#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Prints.h"
#include "Tablero.h"
#include "Jugador.h"
#include "Juego.h"

void menuPrincipal(Juego juego);
void menuTablero(Juego juego);
Juego generarJuego();
void menuJugador(Juego juego);
char pedirMovimiento();

#endif /* MENU_H */

