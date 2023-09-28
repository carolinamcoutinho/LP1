#include <iostream>
#include <cmath>
#include <string>

const double PI = 3.1416;

void calcularCirculo(double raio, double &area, double &perimetro) {
    area = PI * raio * raio;
    perimetro = 2 * PI * raio;
}