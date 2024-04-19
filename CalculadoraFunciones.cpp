//Hernandez Gonzalez Joseph Fabrizzio 1CV11
//Calculadora con funciones
#include <iostream>

using namespace std;

// Función para sumar dos números
float sumar(float num1, float num2) {
    return num1 + num2;
}

// Función para restar dos números
float restar(float num1, float num2) {
    return num1 - num2;
}

// Función para multiplicar dos números
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

// Función para dividir dos números
float dividir(float num1, float num2) {
    if (num2 == 0) {
        cout << "Error: División por cero.\n";
        return 0;
    } else {
        return num1 / num2;
    }
}

int main() {
    char operacion;
    float num1, num2;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Operación no válida.\n";
            break;
    }

    return 0;
}

