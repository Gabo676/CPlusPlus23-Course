#include <iostream> // libreria para imprimir datos en pantalla

#define pi 3.1415 // constante e
float a = 2.0;

int main(){

    int b = 7; // variable local
    int c = 3; // variable local
    int d = 5; // variable local
    int f = 2; // variable local
    char g = 'a'; // variable local
    string h = "Hola Mundo!"; // variable locals

    std::cout << "La multiplicacion de: " << pi << " * " << a << " es igual a:" << pi * a << std::endl; // Imprime "Hola Mundo!" en pantalla
    std::cout << "La division de: " << pi << " / " << a << " es igual a:" << pi / a << std::endl; // Imprime "Hola Mundo!" en pantalla

    std::cout << "El modulo de : " << b << " % " << 2 << " es igual a:" << b % f << std::endl; // Imprime "Hola Mundo!" en pantalla


    int e = (2*(5+3)); // variable local
    std::cout << "El valor de e es: " << e << std::endl; // Imprime "Hola Mundo!" en pantalla


    std::cout << "Ingresa el valor de e: " << std::endl; // Imprime "Hola Mundo!" en pantalla
    std::cin >> e;

    std::cout << "El valor de e es: " << e << std::endl; // Imprime "Hola Mundo!" en pantalla

    system("pause"); // Pausa el programa para que no se cierre la ventana
}

