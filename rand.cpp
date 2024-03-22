#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){


    // Inicializar la semilla para los números aleatorios
    srand(time(0));

    // Generar un número aleatorio entre 1 y 10
    int numero = rand() % 10 + 1;

    // Imprimir el número aleatorio
    std::cout << "Número aleatorio: " << numero << std::endl;

    system("pause");
}