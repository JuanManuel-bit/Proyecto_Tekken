#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <string>

class Jugador
{
public:
    Jugador(const std::string &archivoDibujo);
    void moverArriba();
    void moverAbajo();
    void moverIzquierda();
    void moverDerecha();
    void dibujar() const;

private:
    int x;
    int y;
    std::string dibujo;
};

#endif
