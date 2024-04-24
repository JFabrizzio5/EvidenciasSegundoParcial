#include <iostream>
#include <cmath>
#include <string> // Agregamos esta librería para manejar strings
//Hernandez gonzalez joseph fabrizzio 1CV11
using namespace std;

void resolver_ecuacion_cuadratica(float a, float b, float c) {
    float discriminante, raiz_real, raiz_imaginaria;

    // Calcula el discriminante
    discriminante = b*b - 4*a*c;

    // Calcula las raíces
    if (discriminante > 0) {
        raiz_real = (-b + sqrt(discriminante)) / (2*a);
        raiz_imaginaria = (-b - sqrt(discriminante)) / (2*a);
        cout << "Las raíces son reales y distintas:\n";
        cout << "Raíz 1 = " << raiz_real << endl;
        cout << "Raíz 2 = " << raiz_imaginaria << endl;
    } else if (discriminante == 0) {
        raiz_real = -b / (2*a);
        cout << "La ecuación tiene una raíz real doble:\n";
        cout << "Raíz = " << raiz_real << endl;
    } else {
        raiz_real = -b / (2*a);
        raiz_imaginaria = sqrt(-discriminante) / (2*a);
        cout << "Las raíces son complejas conjugadas:\n";
        cout << "Raíz 1 = " << raiz_real << " + " << raiz_imaginaria << "i" << endl;
        cout << "Raíz 2 = " << raiz_real << " - " << raiz_imaginaria << "i" << endl;
    }
}

int main() {
    string entrada; // Variable para almacenar la entrada del usuario

    do {
        float a, b, c;

        // Solicita al usuario que ingrese los coeficientes
        cout << "Ingrese el coeficiente a, b y c separados por espacios o escriba 'salir' para terminar: ";
        cin >> entrada;

        if (entrada == "salir") // Verifica si el usuario quiere salir
            break; // Sale del bucle si el usuario escribe "salir"

        // Separa la entrada en coeficientes
        size_t pos1 = 0, pos2 = 0;
        pos1 = entrada.find(' ');
        pos2 = entrada.find(' ', pos1 + 1);
        a = stof(entrada.substr(0, pos1));
        b = stof(entrada.substr(pos1 + 1, pos2 - pos1 - 1));
        c = stof(entrada.substr(pos2 + 1));

        // Llama a la función para resolver la ecuación cuadrática
        resolver_ecuacion_cuadratica(a, b, c);
    } while (true); // Se repite infinitamente hasta que el usuario escribe "salir"

    return 0;
}

