#include <iostream>
#include <string>

/*
    Escribir un programa que solicite al usuario que ingrese una contrasenia.
    Si la contrasenia ingresada es incorrecta, el programa debe mostrar un mensaje de error y volver a solicitar al usuario que ingrese la contrasenia. El usuario tiene un maximo de 3 intentos para ingresar la contrasenia. Si el usuario ingresa la contrasenia correcta, el programa debe mostrar un mensaje de bienvenida. Si el usuario no ingresa la contrasenia correcta luego de 3 intentos, el programa debe mostrar un mensaje de error y terminar.
*/

int main() {

    const std::string password = "Hola1234";
    std::string input;
    int intentos = 3;

    std::cout << "Ingrese su contrasenia: ";

    do
    {
        std::cin >> input;

        if (input != password)
        {
            intentos--;
            if(intentos > 0)
            {
                std::cout << "Contrasenia incorrecta. Intente nuevamente. Intentos restantes: " << intentos << std::endl;
                std::cout << "Ingrese su contrasenia: ";
            }
            else
            {
                std::cout << "Contrasenia incorrecta. No tiene mas intentos. Adios!" << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "Bienvenido!" << std::endl;
            break;
        }
        
    } while (input != password);
    
    

    system("pause");
    
    return 0;
}










