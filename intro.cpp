#include <iostream> // libreria para imprimir datos en pantalla
#include <math.h> // libreria para operaciones matematicas


#define e 2.71828182845904523536 // constante e

float pi; // variable global


void imprimir() {
    int a = 0; // variable local
    
    bool b = true; // variable local
    bool c = false; // variable local

    std::cout << "Accediendo desde otra funcion" << pi << std::endl; // Imprime "Hola Mundo!" en pantalla
    std::cout << "Valor de variable a" << a << std::endl; // Imprime "Hola Mundo!" en pantalla
}

// Funcion principal - donde comienza la ejecución del programa
int main() {
    std::cout << pi << std::endl; // Imprime "Hola Mundo!" en pantalla
    imprimir(); // Llama a la funcion imprimir
    system("pause"); // Pausa el programa para que no se cierre la ventana
}

