#include <iostream>
//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
using namespace std;

// Función para calcular la generación a partir del año de nacimiento
string calcularGeneracion(int año_nacimiento) {
    if (año_nacimiento >= 1946 && año_nacimiento <= 1964)
        return "Baby Boomers";
    else if (año_nacimiento >= 1965 && año_nacimiento <= 1980)
        return "Generación X";
    else if (año_nacimiento >= 1981 && año_nacimiento <= 1996)
        return "Millennials";
    else if (año_nacimiento >= 1997)
        return "Generación Z";
    else
        return "Año de nacimiento inválido";
}

int main() {
    int año_nacimiento;

    cout << "Ingrese su año de nacimiento: ";
    cin >> año_nacimiento;

    string generacion = calcularGeneracion(año_nacimiento);
    cout << "Usted pertenece a la generación: " << generacion << endl;

    return 0;
}

