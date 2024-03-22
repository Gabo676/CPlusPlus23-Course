#include <iostream>

int main(){
    int a{0}, b{0};

    /*std::cout << "Ingrese el primer numero" << std::endl;
    std::cin >> a;
    std::cout << "Ingrese el segundo numero" << std::endl;
    std::cin >> b;*/

    /*if ( a > b )
        std::cout << a << " es mayor que " << b << std::endl;
    else
        std::cout << b << " es mayor que " << a << std::endl;*/


    // 5 > $1000, 10% > $15000, 15% > $20000, 20% > $25000

    /*std::cout << "Ingrese su salario mensual" << std::endl;
    std::cin >> a;

    if(a > 25000)
        std::cout << "Usted debe pagar el 20% de impuestos: " << a * .20 << std::endl;
    else if(a > 20000)
        std::cout << "Usted debe pagar el 15% de impuestos: " << a * .15 << std::endl;
    else if(a > 15000)
        std::cout << "Usted debe pagar el 10% de impuestos: " << a * .10 << std::endl;
    else
        std::cout << "Usted debe pagar el 5% de impuestos: " << a * .05 << std::endl;*/
    
    

    


    std::cout << "Ingrese el primer numero" << std::endl;
    std::cin >> a;
    std::cout << "Ingrese el segundo numero" << std::endl;
    std::cin >> b;

    std::cout << (a > b ? a : b) << " es mayor que " << (a > b ? b : a) << std::endl;

    /*int c{0};

    c = (a > b ? a : b);

    std::cout << "El numero mayor es: " << c << std::endl;*/


    
    
    

    system("pause");
}