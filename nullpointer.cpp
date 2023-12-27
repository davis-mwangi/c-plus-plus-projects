#include <iostream>

int main (){
    // Null value = a special value that means something has not value.
    //           When a pointer is holding a nulll value, that pointer is not pointing at anything(null pointer)
    //nullptr  = keyword represents  a null pointer literal

    //Check your code not to dereference null or pointing to free memory

    int *pointer  = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Address not assigned a value" << std::endl;
    }else{
        std::cout << *pointer  << std::endl;
    }

}