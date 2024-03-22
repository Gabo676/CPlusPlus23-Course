/*Escribe un programa en C++ que solicite al usuario ingresar el monto de una compra y determine el tipo de descuento aplicable según las siguientes condiciones:

Si el monto de la compra es mayor o igual a 1000, se aplica un descuento del 20%.
Si el monto de la compra está entre 500 y 999 (inclusive), se aplica un descuento del 10%.
Si el monto de la compra es menor que 500, no se aplica ningún descuento.
El programa debe utilizar el operador ternario para determinar el tipo de descuento y luego imprimir el porcentaje de descuento aplicado.

*/

#include <iostream>
#include <cmath>

int main(){
    /* int monto{0};

    std::cout << "Ingrese el monto de la compra" << std::endl;
    std::cin >> monto;

    std::cout << "El descuento aplicado es: " << (monto < 500 ? "no se aplica ningun descuento"
                                                                : (monto >= 500 && monto <1000) ? "se aplica un descuento del 10%" 
                                                                : "se aplica un descuento del 20%") <<  std::endl; */


    double n{0};

    std::cout << "Ingrese un numero para calcular la raiz cuadrada" << std::endl;
    std::cin >> n;

    if(n < 0)
        std::cout << "No se puede calcular la raiz cuadrada de un numero negativo" << std::endl;
    else
        std::cout << "La raiz cuadrada de " << n << " es: " << sqrt(n) << std::endl;

    system("pause");
}