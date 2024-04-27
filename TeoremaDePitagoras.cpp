#include <iostream> //Hernandez Gonzalez Joseph Fabrizzio 1CV11
#include <cmath>

using namespace std;

// Función para calcular la hipotenusa utilizando el teorema de Pitágoras
double teoremaDePitagoras(int cateto1, int cateto2) {
    double hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    return hipotenusa;
}

int main() {
    // Ingreso de los catetos
    int cateto1, cateto2;
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    // Cálculo de la hipotenusa utilizando el teorema de Pitágoras
    double hipotenusa = teoremaDePitagoras(cateto1, cateto2);
    cout << "La hipotenusa del triángulo rectángulo con catetos " << cateto1 << " y " << cateto2 << " es: " << hipotenusa << endl;

    return 0;
}

