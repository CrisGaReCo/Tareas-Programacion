#pragma once
#include <iostream>
using namespace std;

class Figura
{
protected:
	string nombreFigura;

public:
	Figura(string name) : nombreFigura(name)
	{
		cout << "Nombre de la figura: " << nombreFigura;
	}

	virtual ~Figura()
	{

	}

	//metodos virtuales
	virtual float CalcularArea() = 0;
	virtual float CalcularPerimetro() = 0;
	virtual const string& ObtenerNombreDeFigura() const 
	{  
		return nombreFigura;
	}
};