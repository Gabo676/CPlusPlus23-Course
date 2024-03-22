#include <iostream>

int main(){
    int a{0}, b{0};

    std::cout << "Ingrese el primer numero" << std::endl;
    std::cin >> a;
    std::cout << "Ingrese el segundo numero" << std::endl;
    std::cin >> b;

    if (a > b){
        std::cout << a << " es mayor que " << b << std::endl;
    }else{
        std::cout << b << " es mayor que " << a << std::endl;
    }

    system("pause");
}