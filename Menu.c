#include "Menu.h"
#include "Archivo.h"

Juego generarJuego() {
    Juego juego;
    Tablero *tablero = malloc(150);
    juego.tablero = tablero;
    Jugador *jugador = malloc(150);
    juego.jugador = jugador;
    juego.jugador->numMovimientos = 0;
    return juego;
}

void menuPrincipal(Juego juego) {
    menuJugador(juego);
    clrscr();
    menuTablero(juego);

    while (verificarPartida(juego.tablero) == false) {
        clrscr();
        visualizarPartida(juego.tablero, juego.jugador);
        printf("%s\n", "");
        realizarMovimiento(juego, pedirMovimiento());
        printf("%s\n", "");
    }

    if (verificarPartida(juego.tablero) == true) {
        clrscr();
        visualizarPartida(juego.tablero, juego.jugador);
        printf("%s\n", "");
        printf("%s", "Felicidades has ganado el juego");
        printf("%s\n", "");
        guardarUsuario(juego.jugador);
        free(juego.jugador);
        free(juego.tablero);
        return;
    }

}

void menuTablero(Juego juego) {
    inicializarJuego(juego.tablero, 4, 4);
}

void menuJugador(Juego juego) {
    char nombre[15];
    printf("%s", "Digite su nombre: ");
    scanf("%s", &nombre);
    strcpy(juego.jugador->nombre, nombre);
}

char pedirMovimiento() {
    char movimiento[2];
    do {
        printf("%s", "Digite su movimiento: ");
        scanf("%s", &movimiento);
        strupr(movimiento);
    } while (movimiento[0] != 'A' && movimiento[0] != 'D' && movimiento[0] != 'S' && movimiento[0] != 'W');

    return movimiento[0];
}