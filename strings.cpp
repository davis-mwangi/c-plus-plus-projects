#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name:: " << std::endl;

    std:getline(std::cin , name);

    std::cout << name.at(0) << std::endl;
    std::cout << name.length() << std::endl;
    std::cout << name.append("@gmail.com") << std::endl;

    std::cout << name.insert(1, "B") << std::endl;
    std::cout << name.find("@")<< std::endl;
     std::cout << name.erase(0, 3)<< std::endl;
    // name.clear();

    std::cout << "Names is " << name  << std::endl;



    return 0;
}