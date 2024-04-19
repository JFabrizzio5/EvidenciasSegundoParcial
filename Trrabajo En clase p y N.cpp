#include <iostream>
//Hernandez Gonzalez Joseph Fabrizzio 1CV11
using namespace std;

// Funci?n para determinar si un n?mero es par o impar
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n?mero
    cout << "Ingresa un n?mero entero: ";
    cin >> numero;

    // Verificar si el n?mero es par o impar utilizando la funci?n esPar
    if (esPar(numero)) {
        cout << numero << " es p. par" << endl;
    } else {
        cout << numero << " es n non" << endl;
    }

    return 0;
}

