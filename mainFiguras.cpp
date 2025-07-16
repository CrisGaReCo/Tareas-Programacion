#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "FiguraNLados.h"
#include "Cubo.h"
#include "Linea.h"
using namespace std;

int main()
{
    cout << "Circulo" << endl;
    Circulo c(5.0f); 
    cout << "Area: " << c.CalcularArea() << endl;
    cout << "Perimetro: " << c.CalcularPerimetro() << endl;

    cout << "Cuadrado" << endl;
    Cuadrado q(4.0f); // lado = 4
    cout << "Area: " << q.CalcularArea() << endl;
    cout << "Perimetro: " << q.CalcularPerimetro() << endl;

    cout << "Figura de n lados" << endl;
    FiguraNLados hexagono(6, 3.0f); // 6 lados de 3 unidades
    cout << "Area: " << hexagono.CalcularArea() << endl;
    cout << "Perimetro: " << hexagono.CalcularPerimetro() << endl;

    cout << "Cubo" << endl;
    Cubo cubo(2.5f); // lado = 2.5
    cout << "Volumen: " << cubo.CalcularVolumen() << endl;
    cout << "Area superficial: " << cubo.CalcularAreaSuperficie() << endl;

    cout << "Linea" << endl;
    float puntos[] = { 1.0f, 3.0f, 6.5f, 10.0f }; // puntos sobre eje X
    Linea linea(puntos, 4);
    cout << "Area: " << linea.CalcularArea() << endl;
    cout << "Longitud (perimetro): " << linea.CalcularPerimetro() << endl;

    return 0;
}