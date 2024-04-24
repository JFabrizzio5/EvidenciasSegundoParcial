#include <iostream>
#include <string> // Agregamos esta librería para manejar strings
//1CV11 Hernandez Gonzalez Joseph Fabrizzio
using namespace std;

double calcular_cubo(double numero) {
    double cubo = numero * numero * numero;
    return cubo;
}

int main() {
    string entrada; // Variable para almacenar la entrada del usuario

    do {
        double numero;

        // Solicita al usuario que ingrese el número
        cout << "Ingrese un número o escriba 'salir' para terminar: ";
        cin >> entrada;

        if (entrada == "salir") // Verifica si el usuario quiere salir
            break; // Sale del bucle si el usuario escribe "salir"

        numero = stod(entrada); // Convierte la entrada a double

        // Calcula el cubo del número y lo imprime
        double cubo = calcular_cubo(numero);
        cout << "El cubo de " << numero << " es: " << cubo << endl;
    } while (true); // Se repite infinitamente hasta que el usuario escribe "salir"

    return 0;
}

