#include <iostream>
#include <cmath>
#include <string>

void calcularTriangulo(double base, double altura, double &area, double &perimetro) {
    area = (base * altura) / 2;
    perimetro = base * 3;
}