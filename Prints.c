#include "Prints.h"
#include "Juego.h"

void visualizarTablero(Tablero* tablero) {
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            printf("%s\t", "");
            printf("%s", "[ ");
            if (tablero->tablero[i][j] == 16) {
                printf("%s", "");
            } else {
                printf("%d", tablero->tablero[i][j]);
            }
            printf("%s", " ]");
        }
        printf("%s\n", "");
    }
    printf("%s\n","");
}

void visualizarJugador(Jugador* jugador) {
    printf("%s","Jugador: ");
    printf("%s",jugador->nombre);
    printf("%s"," | ");
    printf("%s","Movimientos: ");
    printf("%d",jugador->numMovimientos);
    printf("%s\n\n","");
}

void visualizarMovimientosPosibles(Tablero *tablero){
    int *movimientosPosibles = retornarMovimientosPos(tablero);
    for(int i =0;i<4;i++){
        if(movimientosPosibles[i] == 1){
            printf("%s","D. Mover a la derecha\n");
        }
        if(movimientosPosibles[i] == 2){
            printf("%s","A. Mover a la izquierda\n");
        }
        if(movimientosPosibles[i] == 3){
            printf("%s","S. Mover abajo\n");
        }
        if(movimientosPosibles[i] == 4){
            printf("%s","W. Mover arriba\n");
        }
    }
}

void visualizarPartida(Tablero*tablero,Jugador*jugador){
    visualizarJugador(jugador);
    visualizarTablero(tablero);
    visualizarMovimientosPosibles(tablero);
}