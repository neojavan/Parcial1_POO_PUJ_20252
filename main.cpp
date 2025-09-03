#include <iostream>
#include <vector>

// Función auxiliar que determina si una cantidad es par.
bool esPrioridadAlta(int cantidadItems) {
    // Un número es par si el residuo de su división por 2 es 0.
    return (cantidadItems % 2 == 0);
}

int main() {
    int inventarioCajas[] = { 150, 77, 40, 51, 98, 29, 64 };
    std::vector <int> inventarioCajas2 = { 150, 77, 40, 51, 98, 29, 64 };
    // Se obtiene el tamaño del arreglo de forma segura.
    int tamano = sizeof(inventarioCajas) / sizeof(inventarioCajas[0]);
    int tamano2 = inventarioCajas2.size();
    int contadorPrioridad = 0;
    int contadorPrioridad2 = 0;

    // Se recorre el arreglo para analizar la cantidad de cada caja.
    std::cout << "Forma de recorrido estandar" << std::endl;
    for (int i = 0; i < tamano; ++i) {
        int cantidadActual = inventarioCajas[i];
        if (esPrioridadAlta(cantidadActual)) {
            std::cout << "Caja con " << cantidadActual << " items: Prioridad Alta" << std::endl;
            contadorPrioridad++;
        } else {
            std::cout << "Caja con " << cantidadActual << " items: Prioridad Normal" << std::endl;
        }
    }

    // Se imprime el resumen final.
    std::cout << "\nTotal de cajas de alta prioridad: " << contadorPrioridad << std::endl;

    std::cout << "\n \n \n Forma de recorrido alternativa" << std::endl;
    for (int i : inventarioCajas2) {
        if (esPrioridadAlta(i)) {
            std::cout << "Caja con " << i << " items: Prioridad Alta" << std::endl;
            contadorPrioridad2++;
        } else {
            std::cout << "Caja con " << i << " items: Prioridad Normal" << std::endl;
        }
    }
    std::cout << "\nTotal de cajas de alta prioridad forma alterna: " << contadorPrioridad2 << std::endl;
    return 0;
}