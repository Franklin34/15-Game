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
    visualizarPartida(juego.tablero,juego.jugador);
    realizarMovimiento(juego.tablero);
    
    visualizarMovimientosPosibles(juego.tablero);
    
    printf("%s\n","");
    printf("%c",pedirMovimiento());
}

void menuTablero(Juego juego){
    inicializarJuego(juego.tablero,4,4);
}

void menuJugador(Juego juego){
    char nombre[15];
    printf("%s","Digite su nombre: ");
    scanf("%s",&nombre);
    strcpy(juego.jugador->nombre, nombre);
}

void menuMovimientos(Tablero *tablero){
    
}

char pedirMovimiento(){
    char movimiento[2];
    printf("%s","Digite su movimiento: ");
    scanf("%s",&movimiento);
    strupr(movimiento);
    
    return movimiento[0];
}