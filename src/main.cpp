#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Jugador.hpp>
#include <BarraSalud.hpp>
#include <EfectosDeSonido.hpp>
#include <EfectosVisuales.hpp>
#include <Enemigos.hpp>
#include <Escenario.hpp>
#include <IAenemigos.hpp>
#include <MensajesDeJuego.hpp>
#include <Menu.hpp>
#include <Personajes.hpp>
#include <Puntajes.hpp>
#include <Temporizador.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
using namespace std;


// main.cpp

#include "Jugador.hpp"
#include "Enemigos.hpp"

int main() {
    Jugador jugador("data/peleador1.txt");
    Enemigos enemigos("data/peleador2.txt");

    // Implementa la lógica para inicializar y mostrar el juego en pantalla.
    // Puedes usar bibliotecas como ncurses o SDL para la representación gráfica.

    while (true) {
        // Captura la entrada del usuario para mover al jugador.
        jugador.dibujar();
        enemigos.dibujar();
    }

    return 0;
}
