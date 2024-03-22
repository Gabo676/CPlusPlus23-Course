/*
    Escribe un programa en C++ que convierta la temperatura de grados Celsius a grados Fahrenheit o viceversa, según la elección del usuario. El programa debe solicitar al usuario que elija la conversión que desea realizar (Celsius a Fahrenheit o Fahrenheit a Celsius), luego solicita la temperatura a convertir y muestra el resultado.

    El usuario puede elegir si desea realizar otra conversión o salir del programa.


    Bienvenido al convertidor de temperatura!

    1. Convertir de Celsius a Fahrenheit
    2. Convertir de Fahrenheit a Celsius
    3. Salir

    Seleccione una opción: 1

    Ingrese la temperatura en grados Celsius: 25
    25 grados Celsius equivalen a 77 grados Fahrenheit.

    ¿Desea realizar otra conversión? (S/N): S

    1. Convertir de Celsius a Fahrenheit
    2. Convertir de Fahrenheit a Celsius
    3. Salir

    Seleccione una opción: 2

    Ingrese la temperatura en grados Fahrenheit: 98.6
    98.6 grados Fahrenheit equivalen a 37 grados Celsius.

    ¿Desea realizar otra conversión? (S/N): N

*/

#include <iostream>

int main(){
    char opcion;

    do{
        // Menu de opciones
        std::cout << "Bienvenido al convertidor de temperatura!" << std::endl;

        std::cout << "1. Convertir de Celsius a Fahrenheit" << std::endl;
        std::cout << "2. Convertir de Fahrenheit a Celsius" << std::endl;
        std::cout << "3. Salir" << std::endl;

        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        // Variables para almacenar la temperatura y el resultado
        double temperatura, resultado;

        if(opcion == '1'){
            std::cout << "Ingrese la temperatura en grados Celsius: ";
            std::cin >> temperatura;

            resultado = (temperatura * 9/5) + 32;

            std::cout << temperatura << " grados Celsius equivalen a " << resultado << " grados Fahrenheit." << std::endl;
        }
        else if(opcion == '2'){
            std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
            std::cin >> temperatura;

            resultado = (temperatura - 32) * 5/9;

            std::cout << temperatura << " grados Fahrenheit equivalen a " << resultado << " grados Celsius." << std::endl;
        }
        else if(opcion == '3'){
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        }
        else{
            std::cout << "Opción no válida." << std::endl;
        }

        std::cout << "¿Desea realizar otra conversión? (S/N): ";
        std::cin >> opcion;

        system("cls");

    }while (opcion == 'S' || opcion == 's');


    system("pause");
}