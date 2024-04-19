#include <iostream>

using namespace std;

void encontrarMaxMin() {
    int num;
    int maximo = INT_MIN;
    int minimo = INT_MAX;

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> num;

        if (num > maximo) {
            maximo = num;
        }

        if (num < minimo) {
            minimo = num;
        }
    }

    cout << "El valor máximo es: " << maximo << endl;
    cout << "El valor mínimo es: " << minimo << endl;
}

int main() {
    encontrarMaxMin();
    return 0;
}

