#include "Tablero.h"

void inicializarTablero(Tablero* tablero, int filas, int columnas) {

    tablero->filas = filas;
    tablero->columnas = columnas;

    tablero->tablero = (int **) malloc(filas * sizeof (int *));

    for (int i = 0; i < filas; i = i + 1) {
        tablero->tablero[i] = (int *) malloc(columnas * sizeof (int));
    }
}

bool verificarRepetido(Tablero* tablero, int num) {
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == num) {
                return true;
            }
        }
    }
    return false;
}

void llenarTablero(Tablero* tablero, bool trampa) {
    int random = 0;
    int random2 = 1;
    if (trampa == false) {
        for (int i = 0; i < tablero->filas; i++) {
            for (int j = 0; j < tablero->columnas; j++) {
                if (random == 0) {
                    random = rand() % JUGADOR + 1;
                    tablero->tablero[i][j] = random;
                } else {
                    while (verificarRepetido(tablero, random) == true) {
                        random = rand() % JUGADOR + 1;
                    }
                    tablero->tablero[i][j] = random;
                }
            }
        }
    }
    else{
        for (int i = 0; i < tablero->filas; i++) {
            for (int j = 0; j < tablero->columnas; j++) {
                tablero->tablero[i][j] = random2++;
            }
        }
        int valor = tablero->tablero[3][3];
        tablero->tablero[3][2] = valor;
        tablero->tablero[3][3] = 15;
    }

}

bool verificarPartida(Tablero* tablero) {
    int contador = 1;

    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] != contador) {
                return false;
            }
            contador++;
        }
    }
    return true;
}

int* retornarMovimientosPos(Tablero* tablero) {
    int *movimientos = malloc(4 * sizeof (int));

    for (int i = 0; i < 4; i++) {
        movimientos[i] = 0;
    }

    if (validarMovDerecha(tablero) == true) {
        movimientos[0] = 1;
    }

    if (validarMovIzquierda(tablero) == true) {
        movimientos[1] = 2;
    }

    if (validarMovAbajo(tablero) == true) {
        movimientos[2] = 3;
    }

    if (validarMovArriba(tablero) == true) {
        movimientos[3] = 4;
    }

    return movimientos;
}

bool validarMovDerecha(Tablero*tablero) {
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                if (j == tablero->columnas - 1) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool validarMovIzquierda(Tablero*tablero) {
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                if (j == 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool validarMovAbajo(Tablero*tablero) {
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                if (i == tablero->filas - 1) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool validarMovArriba(Tablero*tablero) {

    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                if (i == 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

void moverDerecha(Tablero*tablero) {
    int valor = 0;
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                valor = tablero->tablero[i][j + 1];
                tablero->tablero[i][j] = valor;
                tablero->tablero[i][j + 1] = JUGADOR;
                return;
            }
        }
    }
}

void moverIzquierda(Tablero*tablero) {
    int valor = 0;
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                valor = tablero->tablero[i][j - 1];
                tablero->tablero[i][j] = valor;
                tablero->tablero[i][j - 1] = JUGADOR;
                return;
            }
        }
    }
}

void moverArriba(Tablero*tablero) {
    int valor = 0;
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                valor = tablero->tablero[i - 1][j];
                tablero->tablero[i][j] = valor;
                tablero->tablero[i - 1][j] = JUGADOR;
                return;
            }
        }
    }
}

void moverAbajo(Tablero*tablero) {
    int valor = 0;
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            if (tablero->tablero[i][j] == JUGADOR) {
                valor = tablero->tablero[i + 1][j];
                tablero->tablero[i][j] = valor;
                tablero->tablero[i + 1][j] = JUGADOR;
                return;
            }
        }
    }
}