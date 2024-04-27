#include <iostream> //Joseph Fabrizzio HERNANDEZ GONZALEZ 1CV11

using namespace std;

// Función para calcular el promedio de 7 materias
double promedio_parcial() {
    double suma = 0;
    for (int i = 1; i <= 7; ++i) {
        double nota;
        cout << "Ingrese la nota de la materia " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    double promedio = suma / 7;
    return promedio;
}

int main() {
    // Ejemplo de promedio de 7 materias
    double promedio = promedioMaterias();
    cout << "El promedio de las 7 materias es: " << promedio << endl;

    return 0;
}

