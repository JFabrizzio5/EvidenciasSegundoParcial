//Hernandez Gonzalez Joseph Fabrizzio 
#include <iostream>

using namespace std;

// Función para calcular el promedio de estaturas
float calcularPromedio(int num_personas) {
    int contador = 0;
    float suma = 0;

    for (int i = 1; i <= num_personas; ++i) {
        float estatura;
        cout << "Ingrese la estatura de la persona " << i << ": ";
        cin >> estatura;

            suma += estatura;
            contador++;
       
        
    }

    if (contador == 0) {
        return 0; // Si no hay estaturas dentro del rango, devuelve 0
    }

    return suma / contador;
}

int main() {
    
    int num_personas;


    cout << "Ingrese el número de personas: ";
    cin >> num_personas;

    float promedio = calcularPromedio(num_personas);
    cout << "El promedio de estaturas dentro del rango especificado es: " << promedio << endl;

    return 0;
}

