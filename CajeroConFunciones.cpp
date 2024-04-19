#include <iostream>
//Hernandez Gonzalez Joseph Fabrizzio 1CV11
using namespace std;

class CajeroAutomatico {
private:
    float saldo;

public:
    // Constructor
    CajeroAutomatico() {
        saldo = 0;
    }

    // Función para realizar un depósito
    void deposito(float cantidad) {
        saldo += cantidad;
        cout << "Depósito de $" << cantidad << " realizado correctamente." << endl;
    }

    // Función para realizar un retiro
    void retiro(float cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
            cout << "Retiro de $" << cantidad << " realizado correctamente." << endl;
        } else {
            cout << "Saldo insuficiente para realizar el retiro." << endl;
        }
    }

    // Función para consultar el saldo
    void consultarSaldo() {
        cout << "Saldo actual: $" << saldo << endl;
    }
};

int main() {
    CajeroAutomatico cajero;

    int opcion;
    float cantidad;

    do {
        cout << "\n1. Realizar depósito\n2. Realizar retiro\n3. Consultar saldo\n4. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad a depositar: $";
                cin >> cantidad;
                cajero.deposito(cantidad);
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: $";
                cin >> cantidad;
                cajero.retiro(cantidad);
                break;
            case 3:
                cajero.consultarSaldo();
                break;
            case 4:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
        }
    } while (opcion != 4);

    return 0;
}

