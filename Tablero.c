#include "Tablero.h"

void inicializarTablero(Tablero* tablero,int filas,int columnas){
    
    tablero->filas = filas;
    tablero->columnas = columnas;
    
    tablero->tablero = (int **) malloc(filas * sizeof (int *));

    for (int i = 0; i < filas; i = i + 1) {
        tablero->tablero[i] = (int *) malloc(columnas * sizeof (int));
    }
}

void llenarTablero(Tablero* tablero){
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            tablero->tablero[i][j] = rand() % 15 + 1;
        }
    }
    
    int random = rand() % (tablero->filas * tablero->columnas) + 1;
    
    int contador = 0;
    
    for (int i = 0; i < tablero->filas; i++) {
        for (int j = 0; j < tablero->columnas; j++) {
            contador++;
            if(contador == random){
                tablero->tablero[i][j] = 0;
            }
        }
    }
}