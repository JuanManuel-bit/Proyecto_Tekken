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
    std::string representacion; // Representación visual del jugador

public:
    Jugador(const std::string& nombre, const std::string& archivoRepresentacion)
        : nombre(nombre), x(0), y(0), vida(100) {
        std::ifstream archivo(archivoRepresentacion);
        if (archivo.is_open()) {
            std::string linea;
            while (std::getline(archivo, linea)) {
                representacion += linea + '\n';
            }
            archivo.close();
        } else {
            representacion = "Representacion no encontrada";
        }
    }

    void mostrarInformacion(std::vector<std::string>& pantalla) {
        for (size_t i = 0; i < representacion.size(); ++i) {
            if (y + i < pantalla.size()) {
                pantalla[y + i][x] = representacion[i];
            }
        }
    }

    void mover(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void atacar(Enemigo& enemigo);
};
#endif