#include <iostream>
#include <cmath>
#include <string>

const double PI = 3.1416;

void calcularEsfera(double raio, double &area, double &volume) {
    area = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;
}