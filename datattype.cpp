#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
   int  x =  2;
}

int main(){
    const double PI = 3.14;
    double radius = 452.3;

    // A = πr2
    double area =  PI *  radius  * radius;

    std::cout <<  "Area of Circle : " << area << '\n';


    std::cout << second::x;

    return 0;

}