#pragma once
#include "Figura.h"
#include <cmath>

class Circulo : public Figura
{
	private:
		float radio;
	public:
		Circulo(float r) : Figura("Circulo"), radio(r)
		{
			cout << "Radio circulo: " << radio << endl;
		}

		virtual ~Circulo(){}

		float CalcularArea() override
		{
			return 3.1416f * radio * radio;
		}

		float CalcularPerimetro() override
		{
			return 2 * 3.1416f * radio;
		}
};