#include <iostream>

int main(){

    int a{5}, b{7}, c{3}, d{5}, f{2};
    float g{2.0}, h{3.0}, i{5.0};
    

    // std::cout << a << " es menor que " << b << " " << (a < b) << std::endl;
    // std::cout << a << " es mayor que " << b << " " << (a > b) << std::endl;

    /*
    std::cout << a << " es menor o igual que " << b << " " << (a <= b) << std::endl;
    std::cout << a << " es mayor o igual que " << b << " " << (a >= b) << std::endl;
    std::cout << a << " es igual que " << d << " " << (a == d) << std::endl;
    std::cout << a << " es diferente que " << b << " " << (a != b) << std::endl;
    */


    // and
    std::cout << a << " es menor que " << b << " y " << a << " es mayor que " << c << " " << (a < b && a > c) << std::endl;
    // or
    std::cout << a << " es menor que " << b << " o " << a << " es mayor que " << c << " " << (a > b || a < c) << std::endl;
    // not
    std::cout << a << " es diferente que " << b << " " << !(a == b) << std::endl;


    system("pause");
}