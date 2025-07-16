#pragma once
#include "Cuadrado.h"

class Cubo : public Cuadrado
{
public:
    Cubo(float l) : Cuadrado(l)
    {
       
    }

    virtual ~Cubo() {}

    float CalcularVolumen()
    {
        float lado = ObtenerLado();
        return lado * lado * lado;
    }

    float CalcularAreaSuperficie()
    {
        float lado = ObtenerLado();
        return 6 * lado * lado;
    }
};