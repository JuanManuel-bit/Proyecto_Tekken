#pragma once
// enemigos.hpp

#ifndef ENEMIGOS_HPP
#define ENEMIGOS_HPP

#include <string>

class Enemigos {
public:
    Enemigos(const std::string& archivoDibujo);
    void mover();
    void dibujar() const;
private:
    int x;
    int y;
    std::string dibujo;
};

#endif

