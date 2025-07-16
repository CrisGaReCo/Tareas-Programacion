#pragma once
#include "Figura.h"
#include <cmath>

class FiguraNLados : public Figura
{
private:
    int n;  
    float lado; 
    float PI = 3.14159265f;

public:
    FiguraNLados(int numLados, float longitudLado)
        : Figura("Polígono Regular"), n(numLados), lado(longitudLado)
    {
        if (n < 3) 
        {
            cout<<"Un polígono regular debe tener al menos 3 lados.";
        }
    }

    virtual ~FiguraNLados() {}

    float CalcularPerimetro() override
    {
        return n * lado;
    }

    float CalcularArea() override
    {
        float anguloInterior = PI / n;
        return (n * lado * lado) / (4 * tan(anguloInterior));
    }
};