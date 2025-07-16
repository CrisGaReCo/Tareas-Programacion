#pragma once
#include "Figura.h"
#include <vector>
#include <cmath>

class Linea : public Figura
{
private:
    vector<float> puntos;

public:
    Linea(const float* arreglo, int tam)
        : Figura("Línea")
    {
        for (int i = 0; i < tam; ++i)
        {
            puntos.push_back(arreglo[i]);
        }
    }

    virtual ~Linea() {}

    float CalcularArea() override
    {
        return 0.0f;
    }

    float CalcularPerimetro() override
    {
        float longitud = 0.0f;
        for (size_t i = 1; i < puntos.size(); ++i)
        {
            longitud += abs(puntos[i] - puntos[i - 1]);
        }
        return longitud;
    }
};