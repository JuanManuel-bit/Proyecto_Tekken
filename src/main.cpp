#include <iostream>
#include <string>
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

int main() {
    // Crear dos personajes
    Jugador peleador1("Peleador 1");
    Enemigo peleador2("Peleador 2");

    // Mostrar información inicial de los personajes
    peleador1.mostrarInformacion();
    peleador2.mostrarInformacion();

    // Mover los personajes
    peleador1.mover(3, 2);
    peleador2.mover(1, 1);

    // Mostrar la nueva posición de los personajes
    peleador1.mostrarInformacion();
    peleador2.mostrarInformacion();

    // Peleador 1 lanza un ataque a Peleador 2
    peleador1.atacar(peleador2);

    // Mostrar el resultado del ataque
    peleador1.mostrarInformacion();
    peleador2.mostrarInformacion();

    return 0;
}