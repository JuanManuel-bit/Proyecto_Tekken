#pragma once
#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <iostream>
#include <string>

class Enemigo; // Declaración anticipada para permitir la referencia a la clase Enemigo

class Jugador {
private:
    std::string nombre;
    int x;
    int y;
    int vida;

public:
    Jugador(const std::string& nombre) : nombre(nombre), x(0), y(0), vida(100) {}

    void mostrarInformacion() {
        std::cout << "Jugador: " << nombre << " (Posición: " << x << ", " << y << ", Vida: " << vida << ")" << std::endl;
    }

    void mover(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void atacar(Enemigo& enemigo);
};

#endif