#include <iostream>

using namespace std;

void encontrarMaxMin() {
    int num;
    int maximo = INT_MIN;
    int minimo = INT_MAX;

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el n�mero " << i + 1 << ": ";
        cin >> num;

        if (num > maximo) {
            maximo = num;
        }

        if (num < minimo) {
            minimo = num;
        }
    }

    cout << "El valor m�ximo es: " << maximo << endl;
    cout << "El valor m�nimo es: " << minimo << endl;
}

int main() {
    encontrarMaxMin();
    return 0;
}

