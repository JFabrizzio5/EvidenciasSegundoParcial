//Hernandez Gonzalez Joseph Fabrizzio 1CV11
//Calculadora con funciones
#include <iostream>

using namespace std;

// Funci�n para sumar dos n�meros
float sumar(float num1, float num2) {
    return num1 + num2;
}

// Funci�n para restar dos n�meros
float restar(float num1, float num2) {
    return num1 - num2;
}

// Funci�n para multiplicar dos n�meros
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

// Funci�n para dividir dos n�meros
float dividir(float num1, float num2) {
    if (num2 == 0) {
        cout << "Error: Divisi�n por cero.\n";
        return 0;
    } else {
        return num1 / num2;
    }
}

int main() {
    char operacion;
    float num1, num2;

    cout << "Ingrese la operaci�n (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;

    cout << "Ingrese el segundo n�mero: ";
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
            cout << "Operaci�n no v�lida.\n";
            break;
    }

    return 0;
}

