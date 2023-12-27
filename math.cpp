#include <iostream>
#include <cmath>

int main (){
    // double x = 3.99;
    // double y = 4;
    // double z;

    // z  = pow(2,4);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z =  ceil(x);
    // z =  floor(x);


    // std::cout << z << std::endl;

    double a;
    double b;
    double c;

    std::cout << "Enter side A: " << "\n";
    std::cin >> a;

    std::cout << "Enter size B: " << "\n";
    std::cin >> b; 

    a = pow(a, 2);
    b = pow(b, 2);

    c =  sqrt(a + b);

    std::cout << "Side C: " << c << "\n";

    return 0;

}