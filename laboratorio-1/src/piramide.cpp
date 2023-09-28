#include <iostream>
#include <cmath>
#include <string>

void calcularPiramide(double base, double altura, double &area, double &volume) {
    area = base * base + 2 * base * sqrt((base / 2) * (base / 2) + altura * altura);
    volume = (base * base * altura) / 3.0;
}
