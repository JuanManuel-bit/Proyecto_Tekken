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


int main() {
    const int altoPantalla = 25;
    const int anchoPantalla = 80;

    std::vector<std::string> pantalla(altoPantalla, std::string(anchoPantalla, ' ')); // Definir la variable pantalla

    Jugador peleador1("Peleador 1", "data/peleador1.txt");
    Jugador peleador2("Peleador 2", "data/peleador2.txt");

    while (true) {
        // Limpiar la pantalla
        system("clear"); // Funciona en sistemas Unix/Linux
        pantalla.assign(altoPantalla, std::string(anchoPantalla, ' '));

        // Mostrar a los personajes en su posición actual
        peleador1.mostrarInformacion(pantalla);
        peleador2.mostrarInformacion(pantalla);

        // Imprimir la pantalla
        for (const std::string& fila : pantalla) {
            std::cout << fila << '\n';
        }

        // Mover a los personajes
        std::cout << "Mover a Peleador 1 (dx dy): ";
        int dx1, dy1;
        std::cin >> dx1 >> dy1;
        peleador1.mover(dx1, dy1);

        std::cout << "Mover a Peleador 2 (dx dy): ";
        int dx2, dy2;
        std::cin >> dx2 >> dy2;
        peleador2.mover(dx2, dy2);
    }

    return 0;
}