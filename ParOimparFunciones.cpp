#include <iostream>
//Hernandez Gonzalez Joseph Fabrizzio 1CV11
using namespace std;

// Función para determinar si un número es par o impar
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Verificar si el número es par o impar utilizando la función esPar
    if (esPar(numero)) {
        cout << numero << " es un número par." << endl;
    } else {
        cout << numero << " es un número impar." << endl;
    }

    return 0;
}

