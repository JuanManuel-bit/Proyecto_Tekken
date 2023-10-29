#pragma once

#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <curses.h>
#include <ncurses.h>
#include <string>
#include <list>

using namespace std;

class Escenario
{
private:
public:
    Escenario()
    {
        initscr();
        noecho();
        curs_set(FALSE);
        cbreak();
        keypad(stdscr, TRUE);
        timeout(10);
    }
    void Actualizar(list<Actualizable *> Actualizables)
    {
        for (auto &&Actualizable : Actualizables)
        {
            Actualizable->Actualizar();
        }
        usleep(1000/24);
    }
    void Dibujar(list<Dibujo *> dibujos)
    {
        clear();
        for (auto &&dibujo : dibujos)
        {
            dibujo->Dibujar();
        }
        box(stdscr, '=', '?');
        refresh();
    }

    ~Escenario()
    {
        keypad(stdscr, FALSE);
        endwin();
    }
};