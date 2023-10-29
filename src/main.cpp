#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <BarraSalud.hpp>
#include <EfectosDeSonido.hpp>
#include <EfectosVisuales.hpp>
#include <Escenario.hpp>
#include <IAenemigos.hpp>
#include <MensajesDeJuego.hpp>
#include <Menu.hpp>
#include <Personajes.hpp>
#include <Puntajes.hpp>
#include <Temporizador.hpp>
#include <Actualizable.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
using namespace std;

// main.cpp

#include "Jugador.hpp"
#include "Enemigos.hpp"

int main(int argc, char const *argv[])
{

    Escenario v;
    Dibujo d1(1, 1, "peleador1");
    Dibujo d2(1, 1, "peleador2");
    
    bool ejecucion = true;
    while (ejecucion)
    {
        v.Actualizar();
        if (getch() == 'q')
        {
            break;
        }
        if (getch() == 'a')
        {
            d1.Mover(5, 5);
        }

        clear();
      
        d2.Dibujar();
        d1.Dibujar();

        refresh();
        usleep(41000);
    }

    return 0;
}