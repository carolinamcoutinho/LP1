#include <iostream>
#include <cmath>
#include <string>

void calcularParalelepipedo(double comprimento, double largura, double altura, double &area, double &volume) {
    area = 2 * (comprimento * largura + comprimento * altura + largura * altura);
    volume = comprimento * largura * altura;
}