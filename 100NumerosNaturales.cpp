#include <iostream>

using namespace std;

// Funci�n para imprimir los primeros 100 n�meros naturales
void imprimir_naturales() {
    cout << "Los primeros 100 n�meros naturales son:" << endl;
    
    for (int i = 1; i <= 100; ++i) {
        cout << i << " ";
    }
    
    cout << endl;
}

int main() {
    // Llamada a la funci�n para imprimir los n�meros naturales
    imprimir_naturales();
    
    return 0;
}

