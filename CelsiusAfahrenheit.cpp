#include <iostream>
#include <cmath>
//Hernandez gonzalez joseph fabrizzio 1CV11
using namespace std;

void resolver_ecuacion_cuadratica(float a, float b, float c) {
    float discriminante, raiz_real, raiz_imaginaria;

    // Calcula el discriminante
    discriminante = b*b - 4*a*c;

    // Calcula las ra�ces
    if (discriminante > 0) {
        raiz_real = (-b + sqrt(discriminante)) / (2*a);
        raiz_imaginaria = (-b - sqrt(discriminante)) / (2*a);
        cout << "Las ra�ces son reales y distintas:\n";
        cout << "Ra�z 1 = " << raiz_real << endl;
        cout << "Ra�z 2 = " << raiz_imaginaria << endl;
    } else if (discriminante == 0) {
        raiz_real = -b / (2*a);
        cout << "La ecuaci�n tiene una ra�z real doble:\n";
        cout << "Ra�z = " << raiz_real << endl;
    } else {
        raiz_real = -b / (2*a);
        raiz_imaginaria = sqrt(-discriminante) / (2*a);
        cout << "Las ra�ces son complejas conjugadas:\n";
        cout << "Ra�z 1 = " << raiz_real << " + " << raiz_imaginaria << "i" << endl;
        cout << "Ra�z 2 = " << raiz_real << " - " << raiz_imaginaria << "i" << endl;
    }
}

int main() {
    float a, b, c;

    // Solicita al usuario que ingrese los coeficientes
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    // Llama a la funci�n para resolver la ecuaci�n cuadr�tica
    resolver_ecuacion_cuadratica(a, b, c);

    return 0;
}

