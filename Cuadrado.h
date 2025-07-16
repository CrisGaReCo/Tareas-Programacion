#pragma once
#include "Figura.h"

class Cuadrado : public Figura
{
private:
    float lado;

public:
    Cuadrado(float l) : Figura("Cuadrado"), lado(l)
    {
    
    }

    virtual ~Cuadrado() {}

    float CalcularArea() override
    {
        return lado * lado;
    }

    float CalcularPerimetro() override
    {
        return 4 * lado;
    }

    float ObtenerLado() const
    {
        return lado;
    }
};