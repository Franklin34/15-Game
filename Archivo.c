#include "Archivo.h"

void guardarUsuario(Jugador *jugador) {
    FILE *fp;
    fp = fopen("bitacora.txt", "a");
    fprintf(fp,"El nombre del jugador es: %s\n",jugador->nombre);
    fprintf(fp,"El numero de movimientos realizados: %d\n\n",jugador->numMovimientos);
}