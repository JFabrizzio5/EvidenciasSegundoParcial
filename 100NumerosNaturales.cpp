#include <iostream>

using namespace std;

// Función para imprimir los primeros 100 números naturales
void imprimir_naturales() {
    cout << "Los primeros 100 números naturales son:" << endl;
    
    for (int i = 1; i <= 100; ++i) {
        cout << i << " ";
    }
    
    cout << endl;
}

int main() {
    // Llamada a la función para imprimir los números naturales
    imprimir_naturales();
    
    return 0;
}

