#include <iostream>

using namespace std;

double calcularIMC(double peso, double altura_m) {
    // Calcular el IMC utilizando la fórmula: peso / (altura ^ 2)
    double imc = peso / (altura_m * altura_m);

    return imc;
}

string interpretacionIMC(double imc) {
    if (imc < 18.5) {
        return "Bajo peso";
    } else if (imc >= 18.5 && imc < 25) {
        return "Peso normal";
    } else if (imc >= 25 && imc < 30) {
        return "Sobrepeso";
    } else {
        return "Obesidad";
    }
}

int main() {
	 double peso, altura_m;
	 string opcion;
	 
	do{

   opcion = "Si";
    // Solicitar al usuario el peso y la altura
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura_m;

    // Calcular el IMC
    double imc = calcularIMC(peso, altura_m);

    // Interpretar el IMC
    string interpretacion = interpretacionIMC(imc);

    // Mostrar el resultado
    cout << "Su IMC es: " << imc << endl;
    cout << "Interpretación: " << interpretacion << endl;
    	
	cout << "Quieres continuar? escribe NO en mayusculas para salir ";
   	cin >> opcion;
 
}while(opcion != "NO");
    cout << "Adios";
    return 0;

}

