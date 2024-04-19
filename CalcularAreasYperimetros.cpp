//Hernandez gonzalez joseph fabrizzio 1CV11
#include <iostream>

using namespace std;

// Constante para representar PI
const float PI = 3.14159265358979323846;

// Función para calcular el área de un triángulo
float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

// Función para calcular el perímetro de un triángulo
float perimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

// Función para calcular el área de un círculo
float areaCirculo(float radio) {
    return PI * radio * radio;
}

// Función para calcular el perímetro de un círculo
float perimetroCirculo(float radio) {
    return 2 * PI * radio;
}

// Función para calcular el área de un rectángulo
float areaRectangulo(float base, float altura) {
    return base * altura;
}

// Función para calcular el perímetro de un rectángulo
float perimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

// Función para calcular el área de un cuadrado
float areaCuadrado(float lado) {
    return lado * lado;
}

// Función para calcular el perímetro de un cuadrado
float perimetroCuadrado(float lado) {
    return 4 * lado;
}

int main() {
    char figura;
    char operacion;

    cout << "Ingrese la figura que desea calcular (T para triángulo, C para círculo, R para rectángulo, Q para cuadrado): ";
    cin >> figura;

    if (figura == 'T' || figura == 't' || figura == 'C' || figura == 'c' || figura == 'R' || figura == 'r' || figura == 'Q' || figura == 'q') {
        cout << "Ingrese A para calcular el área o P para calcular el perímetro: ";
        cin >> operacion;

        switch (figura) {
            case 'T':
            case 't':
                if (operacion == 'A' || operacion == 'a') {
                    float base, altura;
                    cout << "Ingrese la base del triángulo: ";
                    cin >> base;
                    cout << "Ingrese la altura del triángulo: ";
                    cin >> altura;
                    cout << "Área del triángulo: " << areaTriangulo(base, altura) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float lado1, lado2, lado3;
                    cout << "Ingrese el lado 1 del triángulo: ";
                    cin >> lado1;
                    cout << "Ingrese el lado 2 del triángulo: ";
                    cin >> lado2;
                    cout << "Ingrese el lado 3 del triángulo: ";
                    cin >> lado3;
                    cout << "Perímetro del triángulo: " << perimetroTriangulo(lado1, lado2, lado3) << endl;
                } else {
                    cout << "Operación no válida.\n";
                }
                break;
            case 'C':
            case 'c':
                if (operacion == 'A' || operacion == 'a') {
                    float radio;
                    cout << "Ingrese el radio del círculo: ";
                    cin >> radio;
                    cout << "Área del círculo: " << areaCirculo(radio) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float radio;
                    cout << "Ingrese el radio del círculo: ";
                    cin >> radio;
                    cout << "Perímetro del círculo: " << perimetroCirculo(radio) << endl;
                } else {
                    cout << "Operación no válida.\n";
                }
                break;
            case 'R':
            case 'r':
                if (operacion == 'A' || operacion == 'a') {
                    float base, altura;
                    cout << "Ingrese la base del rectángulo: ";
                    cin >> base;
                    cout << "Ingrese la altura del rectángulo: ";
                    cin >> altura;
                    cout << "Área del rectángulo: " << areaRectangulo(base, altura) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float base, altura;
                    cout << "Ingrese la base del rectángulo: ";
                    cin >> base;
                    cout << "Ingrese la altura del rectángulo: ";
                    cin >> altura;
                    cout << "Perímetro del rectángulo: " << perimetroRectangulo(base, altura) << endl;
                } else {
                    cout << "Operación no válida.\n";
                }
                break;
            case 'Q':
            case 'q':
                if (operacion == 'A' || operacion == 'a') {
                    float lado;
                    cout << "Ingrese el lado del cuadrado: ";
                    cin >> lado;
                    cout << "Área del cuadrado: " << areaCuadrado(lado) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float lado;
                    cout << "Ingrese el lado del cuadrado: ";
                    cin >> lado;
                    cout << "Perímetro del cuadrado: " << perimetroCuadrado(lado) << endl;
                } else {
                    cout << "Operación no válida.\n";
                }
                break;
        }
    } else {
        cout << "Figura no válida.\n";
    }

    return 0;
}

