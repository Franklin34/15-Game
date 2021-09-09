#include "Juego.h"

void inicializarJuego(Tablero* tablero, int filas, int columnas) {
    inicializarTablero(tablero, filas, columnas);
    llenarTablero(tablero,false);
}

void realizarMovimiento(Juego juego, char movimiento) {
    switch (movimiento) {
        case 'A':
            moverIzquierda(juego.tablero);
            juego.jugador->numMovimientos++;
            break;
        case 'S':
            moverAbajo(juego.tablero);
            juego.jugador->numMovimientos++;
            break;
        case 'D':
            moverDerecha(juego.tablero);
            juego.jugador->numMovimientos++;
            break;
        case 'W':
            moverArriba(juego.tablero);
            juego.jugador->numMovimientos++;
            break;
    }
}
