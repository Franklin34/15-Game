#include "Prints.h"

void visualizarTablero(Tablero* tablero) {
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            printf("%s\t", "");
            printf("%s", "[ ");
            if (tablero->tablero[i][j] == 0) {
                printf("%s", "");
            } else {
                printf("%d", tablero->tablero[i][j]);
            }
            printf("%s", " ]");
        }
        printf("%s\n", "");
    }
}

void visualizarJugador(Jugador jugador) {

}