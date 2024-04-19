#include <iostream>
//Hernandez Gonzalez Joseph Fabrizzio 1CV11
using namespace std;

// Función para calcular el cuadrado de un número
int cuadrado(int numero) {
    return numero * numero;
}

// Función para calcular el cubo de un número
int cubo(int numero) {
    return numero * numero * numero;
}

int main() {
    int num;
    char opcion;

    cout << "Ingresa un número: ";
    cin >> num;

    cout << "¿Deseas calcular el cuadrado (c) o el cubo (b) del número? ";
    cin >> opcion;

    if (opcion == 'c') {
        // Llama a la función cuadrado y muestra el resultado
        int resultado = cuadrado(num);
        cout << "El cuadrado de " << num << " es: " << resultado << endl;
    } else if (opcion == 'b') {
        // Llama a la función cubo y muestra el resultado
        int resultado = cubo(num);
        cout << "El cubo de " << num << " es: " << resultado << endl;
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}

