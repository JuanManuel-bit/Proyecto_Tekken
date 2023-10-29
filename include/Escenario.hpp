#pragma once
// ventana.cpp

#include <SDL.h>

class Ventana {
public:
    Ventana(int ancho, int alto, const char* titulo);
    void mostrar();
private:
    SDL_Window* ventana;
    SDL_Renderer* renderizador;
};

Ventana::Ventana(int ancho, int alto, const char* titulo) {
    SDL_Init(SDL_INIT_VIDEO);
    ventana = SDL_CreateWindow(titulo, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ancho, alto, 0);
    renderizador = SDL_CreateRenderer(ventana, -1, SDL_RENDERER_ACCELERATED);
}

void Ventana::mostrar() {
    // Implementa la lógica para mostrar los personajes en la ventana.
}

int main() {
    Ventana ventana(800, 600, "Mi Juego");
    ventana.mostrar();

    SDL_Event evento;
    bool ejecutar = true;

    while (ejecutar) {
        while (SDL_PollEvent(&evento)) {
            if (evento.type == SDL_QUIT) {
                ejecutar = false;
            }
        }
    }

    return 0;
}
