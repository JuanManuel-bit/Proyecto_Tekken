#pragma once
#ifndef ENEMIGOS_HPP
#define ENEMIGOS_HPP

#include <iostream>
#include <string>

class Jugador; // Declaración anticipada para permitir la referencia a la clase Jugador

class Enemigo {
private:
    std::string nombre;
    int x;
    int y;
    int vida;

public:
    Enemigo(const std::string& nombre) : nombre(nombre), x(5), y(5), vida(80) {}

    void mostrarInformacion() {
        std::cout << "Enemigo: " << nombre << " (Posición: " << x << ", " << y << ", Vida: " << vida << ")" << std::endl;
    }

    void mover(int dx, int dy) {
        x += dx;
        y += dy;
    }

};

#endif