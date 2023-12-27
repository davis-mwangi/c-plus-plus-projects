#include <iostream>

int main(){
   /*
   pointers  = variable that stores a memory address of another variable 
               sometimes its easier to work with an address
    
    & address -of operator
    * dereference operator

   */

    std::string name = "David";
    int age = 21;

    std::string *pName = &name;
    int *pAge = &age;

    std::cout << *pName << std::endl;
     std::cout << *pAge << std::endl;

    return 0;
}