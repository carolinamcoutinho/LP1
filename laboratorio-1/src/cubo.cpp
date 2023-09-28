#include <iostream>
#include <cmath>
#include <string>

void calcularCubo(double aresta, double &area, double &volume) {
    area = 6 * aresta * aresta;
    volume = aresta * aresta * aresta;
}