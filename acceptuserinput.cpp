#include <iostream>

int main(){
   
    std::string name;
    int age;

    std::cout << "Enter your Full Names" << "\n";
    std::getline( std::cin >> std::ws, name );
   
    std::cout << "Enter your Age" << "\n";
    std::cin >> age;

    std::cout << "Your name is " << name << "\n";
    std::cout << "Your age is " << age  << " years old" << std::endl;

}