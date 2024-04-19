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


    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Verificar si el número es par o impar utilizando la función esPar
    char resultado = esPar(numero);
    
    // Imprimir el resultado
    cout << "El número " << numero << " es ";
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

