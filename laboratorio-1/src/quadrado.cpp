#include <iostream>
#include <cmath>
#include <string>

void calcularQuadrado(double lado, double &area, double &perimetro) {
    area = lado * lado;
    perimetro = 4 * lado;
}