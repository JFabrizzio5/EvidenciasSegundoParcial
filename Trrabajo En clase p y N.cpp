#include <iostream>
using namespace std;

char esPar(int numero) {
    if (numero % 2 == 0) {
        return 'P'; // Retorna 'P' si es par
    } else {
        return 'N'; // Retorna 'N' si es impar
    }
}

int main() {
    int numero;	 
	string opcion;
	opcion = "Si";
	do{


    // Solicitar al usuario que ingrese un n�mero
    cout << "Ingresa un n�mero entero: ";
    cin >> numero;

    // Verificar si el n�mero es par o impar utilizando la funci�n esPar
    char resultado = esPar(numero);
    
    // Imprimir el resultado
    cout << "El n�mero " << numero << " es ";
    if (resultado == 'P') {
        cout << "par ";
    } else {
        cout << "impar ";
    }
    cout << "(resultado: " << resultado << ")" << endl;
    
	cout << "Quieres continuar? escribe NO en mayusculas para salir ";
   	cin >> opcion;
	}while(opcion != "NO");
	cout << "Adios";
    return 0;
}

