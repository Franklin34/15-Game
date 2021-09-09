#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Prints.h"

int main(int argc, char** argv) {

    srand (time(NULL));
    
    menuPrincipal(generarJuego());
    
    return (EXIT_SUCCESS);
}

