#include <iostream>
#include <cmath>
#include <string>
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "piramide.h"
#include "paralelepipedo.h"
#include "esfera.h"
#include "cubo.h"
#include "circulo.h"

const double PI = 3.1416;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Uso: " << argv[0] << " <forma> <dados>" << std::endl;
        return 1;
    }

    std::string forma = argv[1];

    if (forma == "quadrado") {
        if (argc != 3) {
            std::cerr << "Uso: " << argv[0] << " quadrado <lado>" << std::endl;
            return 1;
        }

        double lado = std::stod(argv[2]);
        double area, perimetro;
        calcularQuadrado(lado, area, perimetro);

        std::cout << "Area do quadrado: " << area << std::endl;
        std::cout << "Perimetro do quadrado: " << perimetro << std::endl;
    } else if (forma == "triangulo") {
        if (argc != 4) {
            std::cerr << "Uso: " << argv[0] << " triangulo <base> <altura>" << std::endl;
            return 1;
        }

        double base = std::stod(argv[2]);
        double altura = std::stod(argv[3]);
        double area, perimetro;
        calcularTriangulo(base, altura, area, perimetro);

        std::cout << "Area do triangulo: " << area << std::endl;
        std::cout << "Perimetro do triangulo: " << perimetro << std::endl;
    } else if (forma == "retangulo") {
        if (argc != 4) {
            std::cerr << "Uso: " << argv[0] << " retangulo <comprimento> <largura>" << std::endl;
            return 1;
        }

        double comprimento = std::stod(argv[2]);
        double largura = std::stod(argv[3]);
        double area, perimetro;
        calcularRetangulo(comprimento, largura, area, perimetro);

        std::cout << "Area do retangulo: " << area << std::endl;
        std::cout << "Perimetro do retangulo: " << perimetro << std::endl;
    } else if (forma == "circulo") {
        if (argc != 3) {
            std::cerr << "Uso: " << argv[0] << " circulo <raio>" << std::endl;
            return 1;
        }

        double raio = std::stod(argv[2]);
        double area, perimetro;
        calcularCirculo(raio, area, perimetro);

        std::cout << "Area do circulo: " << area << std::endl;
        std::cout << "Perimetro do circulo: " << perimetro << std::endl;
    } else if (forma == "esfera") {
        if (argc != 3) {
            std::cerr << "Uso: " << argv[0] << " esfera <raio>" << std::endl;
            return 1;
        }

        double raio = std::stod(argv[2]);
        double area, volume;
        calcularEsfera(raio, area, volume);

        std::cout << "Area da esfera: " << area << std::endl;
        std::cout << "Volume da esfera: " << volume << std::endl;
    } else if (forma == "piramide") {
        if (argc != 4) {
            std::cerr << "Uso: " << argv[0] << " piramide <base> <altura>" << std::endl;
            return 1;
        }

        double base = std::stod(argv[2]);
        double altura = std::stod(argv[3]);
        double area, volume;
        calcularPiramide(base, altura, area, volume);

        std::cout << "Area da piramide: " << area << std::endl;
        std::cout << "Volume da piramide: " << volume << std::endl;
    } else if (forma == "cubo") {
        if (argc != 3) {
            std::cerr << "Uso: " << argv[0] << " cubo <aresta>" << std::endl;
            return 1;
        }

        double aresta = std::stod(argv[2]);
        double area, volume;
        calcularCubo(aresta, area, volume);

        std::cout << "Area do cubo: " << area << std::endl;
        std::cout << "Volume do cubo: " << volume << std::endl;
    } else if (forma == "paralelepipedo") {
        if (argc != 5) {
            std::cerr << "Uso: " << argv[0] << " paralelepipedo <comprimento> <largura> <altura>" << std::endl;
            return 1;
        }

        double comprimento = std::stod(argv[2]);
        double largura = std::stod(argv[3]);
        double altura = std::stod(argv[4]);
        double area, volume;
        calcularParalelepipedo(comprimento, largura, altura, area, volume);

        std::cout << "Area do paralelepipedo: " << area << std::endl;
        std::cout << "Volume do paralelepipedo: " << volume << std::endl;
    } else {
        std::cerr << "Forma geométrica não reconhecida." << std::endl;
        return 1;
    }

    return 0;
}
