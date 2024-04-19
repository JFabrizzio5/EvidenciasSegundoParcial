#include <iostream>
//Hernandez Gonzalez Joseph Fabrizzio 1CV11
void contarMayorMenor(int veces) {
    int mayores = 0, menores = 0;
    for (int i = 0; i < veces; ++i) {
        int num;
        std::cout << "Ingrese el número " << (i + 1) << ": ";
        std::cin >> num;
        if (num > 0)
            mayores++;
        else if (num < 0)
            menores++;
    }
    std::cout << "Total de números mayores que 0: " << mayores << std::endl;
    std::cout << "Total de números menores que 0: " << menores << std::endl;
}

int main() {
    int veces;
    std::cout << "¿Cuántos números deseas ingresar? ";
    std::cin >> veces;
    
    if (veces <= 0) {
        std::cout << "Debe ingresar al menos un número." << std::endl;
        return 1;
    }
    
    contarMayorMenor(veces);
    
    return 0;
}

