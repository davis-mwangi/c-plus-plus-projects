#include<iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

        Student(std::string name, int age, double gpa){
            this-> name = name;
            this->age = age;
            this->gpa = gpa;
        }


};


int main(){

    Student student1("David", 23, 3.53);


  return 0;
}