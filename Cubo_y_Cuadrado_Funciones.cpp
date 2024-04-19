#include <iostream>
//Hernandez Gonzalez Joseph Fabrizzio 1CV11
using namespace std;

// Funci�n para calcular el cuadrado de un n�mero
int cuadrado(int numero) {
    return numero * numero;
}

// Funci�n para calcular el cubo de un n�mero
int cubo(int numero) {
    return numero * numero * numero;
}

int main() {
    int num;
    char opcion;

    cout << "Ingresa un n�mero: ";
    cin >> num;

    cout << "�Deseas calcular el cuadrado (c) o el cubo (b) del n�mero? ";
    cin >> opcion;

    if (opcion == 'c') {
        // Llama a la funci�n cuadrado y muestra el resultado
        int resultado = cuadrado(num);
        cout << "El cuadrado de " << num << " es: " << resultado << endl;
    } else if (opcion == 'b') {
        // Llama a la funci�n cubo y muestra el resultado
        int resultado = cubo(num);
        cout << "El cubo de " << num << " es: " << resultado << endl;
    } else {
        cout << "Opci�n no v�lida." << endl;
    }

    return 0;
}

