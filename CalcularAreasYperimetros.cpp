//Hernandez gonzalez joseph fabrizzio 1CV11
#include <iostream>

using namespace std;

// Constante para representar PI
const float PI = 3.14159265358979323846;

// Funci�n para calcular el �rea de un tri�ngulo
float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

// Funci�n para calcular el per�metro de un tri�ngulo
float perimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

// Funci�n para calcular el �rea de un c�rculo
float areaCirculo(float radio) {
    return PI * radio * radio;
}

// Funci�n para calcular el per�metro de un c�rculo
float perimetroCirculo(float radio) {
    return 2 * PI * radio;
}

// Funci�n para calcular el �rea de un rect�ngulo
float areaRectangulo(float base, float altura) {
    return base * altura;
}

// Funci�n para calcular el per�metro de un rect�ngulo
float perimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

// Funci�n para calcular el �rea de un cuadrado
float areaCuadrado(float lado) {
    return lado * lado;
}

// Funci�n para calcular el per�metro de un cuadrado
float perimetroCuadrado(float lado) {
    return 4 * lado;
}

int main() {
    char figura;
    char operacion;

    cout << "Ingrese la figura que desea calcular (T para tri�ngulo, C para c�rculo, R para rect�ngulo, Q para cuadrado): ";
    cin >> figura;

    if (figura == 'T' || figura == 't' || figura == 'C' || figura == 'c' || figura == 'R' || figura == 'r' || figura == 'Q' || figura == 'q') {
        cout << "Ingrese A para calcular el �rea o P para calcular el per�metro: ";
        cin >> operacion;

        switch (figura) {
            case 'T':
            case 't':
                if (operacion == 'A' || operacion == 'a') {
                    float base, altura;
                    cout << "Ingrese la base del tri�ngulo: ";
                    cin >> base;
                    cout << "Ingrese la altura del tri�ngulo: ";
                    cin >> altura;
                    cout << "�rea del tri�ngulo: " << areaTriangulo(base, altura) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float lado1, lado2, lado3;
                    cout << "Ingrese el lado 1 del tri�ngulo: ";
                    cin >> lado1;
                    cout << "Ingrese el lado 2 del tri�ngulo: ";
                    cin >> lado2;
                    cout << "Ingrese el lado 3 del tri�ngulo: ";
                    cin >> lado3;
                    cout << "Per�metro del tri�ngulo: " << perimetroTriangulo(lado1, lado2, lado3) << endl;
                } else {
                    cout << "Operaci�n no v�lida.\n";
                }
                break;
            case 'C':
            case 'c':
                if (operacion == 'A' || operacion == 'a') {
                    float radio;
                    cout << "Ingrese el radio del c�rculo: ";
                    cin >> radio;
                    cout << "�rea del c�rculo: " << areaCirculo(radio) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float radio;
                    cout << "Ingrese el radio del c�rculo: ";
                    cin >> radio;
                    cout << "Per�metro del c�rculo: " << perimetroCirculo(radio) << endl;
                } else {
                    cout << "Operaci�n no v�lida.\n";
                }
                break;
            case 'R':
            case 'r':
                if (operacion == 'A' || operacion == 'a') {
                    float base, altura;
                    cout << "Ingrese la base del rect�ngulo: ";
                    cin >> base;
                    cout << "Ingrese la altura del rect�ngulo: ";
                    cin >> altura;
                    cout << "�rea del rect�ngulo: " << areaRectangulo(base, altura) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float base, altura;
                    cout << "Ingrese la base del rect�ngulo: ";
                    cin >> base;
                    cout << "Ingrese la altura del rect�ngulo: ";
                    cin >> altura;
                    cout << "Per�metro del rect�ngulo: " << perimetroRectangulo(base, altura) << endl;
                } else {
                    cout << "Operaci�n no v�lida.\n";
                }
                break;
            case 'Q':
            case 'q':
                if (operacion == 'A' || operacion == 'a') {
                    float lado;
                    cout << "Ingrese el lado del cuadrado: ";
                    cin >> lado;
                    cout << "�rea del cuadrado: " << areaCuadrado(lado) << endl;
                } else if (operacion == 'P' || operacion == 'p') {
                    float lado;
                    cout << "Ingrese el lado del cuadrado: ";
                    cin >> lado;
                    cout << "Per�metro del cuadrado: " << perimetroCuadrado(lado) << endl;
                } else {
                    cout << "Operaci�n no v�lida.\n";
                }
                break;
        }
    } else {
        cout << "Figura no v�lida.\n";
    }

    return 0;
}

