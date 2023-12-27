#include<iostream>

void happyBirthday(std::string name, int age);

int main(){
    std::string name = "David";
    int age = 30;
   happyBirthday(name, age);

 return 0;
}


void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to  You " << name << ", you are now " << age  << "years old" << std::endl;
}

