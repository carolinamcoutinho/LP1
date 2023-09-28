#include <iostream>
#include <cmath>
#include <string>

void calcularRetangulo(double comprimento, double largura, double &area, double &perimetro) {
    area = comprimento * largura;
    perimetro = 2 * (comprimento + largura);
}