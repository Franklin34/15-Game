#include "Menu.h"

Juego generarJuego(){
    Juego juego;
    Tablero *tablero = malloc(150);
    juego.tablero = tablero;
    Jugador *jugador = malloc(150);
    juego.jugador = jugador;
    return juego;
}

void menuPrincipal(Juego juego){
    menuJugador(juego);
    clrscr();
    menuTablero(juego);
    clrscr();
    visualizarDatos(juego);
    realizarMovimiento(juego.tablero);
}

void menuTablero(Juego juego){
    int filas;
    int columnas;
    printf("%s","Digite la cantidad de filas: ");
    scanf("%d",&filas);
    printf("%s","Digite la cantidad de columnas: ");
    scanf("%d",&columnas);
    inicializarJuego(juego.tablero,filas,columnas);
}

void menuJugador(Juego juego){
    char nombre[15];
    printf("%s","Digite su nombre: ");
    scanf("%s",&nombre);
    strcpy(juego.jugador->nombre, nombre);
}

void visualizarDatos(Juego juego){
    printf("%s","Nombre del jugador: ");
    printf("%s",juego.jugador->nombre);
    printf("%s\n","");
    printf("%s\n","");
    visualizarTablero(juego.tablero);
    printf("%s\n","");
}

void menuMovimientos(Tablero *tablero){
    
}

void pedirPrimerosDatos(){
    
}