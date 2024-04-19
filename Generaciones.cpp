#include <iostream>
//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
using namespace std;

// Funci�n para calcular la generaci�n a partir del a�o de nacimiento
string calcularGeneracion(int a�o_nacimiento) {
    if (a�o_nacimiento >= 1946 && a�o_nacimiento <= 1964)
        return "Baby Boomers";
    else if (a�o_nacimiento >= 1965 && a�o_nacimiento <= 1980)
        return "Generaci�n X";
    else if (a�o_nacimiento >= 1981 && a�o_nacimiento <= 1996)
        return "Millennials";
    else if (a�o_nacimiento >= 1997)
        return "Generaci�n Z";
    else
        return "A�o de nacimiento inv�lido";
}

int main() {
    int a�o_nacimiento;

    cout << "Ingrese su a�o de nacimiento: ";
    cin >> a�o_nacimiento;

    string generacion = calcularGeneracion(a�o_nacimiento);
    cout << "Usted pertenece a la generaci�n: " << generacion << endl;

    return 0;
}

