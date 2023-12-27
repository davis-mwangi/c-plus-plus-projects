#include <iostream>

struct student
{
    /* data */
    std::string name;
    int age;
    double gpa;
    bool enrolled = true;
};

void printStudent (student &student);
void changeGpa(student &student, double gpa);

int main()
{

    student student1;
    student1.age = 21;
    student1.name = "Peters";
    student1.gpa = 3.25;

    printStudent(student1);
    changeGpa(student1, 3.01);
    printStudent(student1);

    student student2;
    student2.age = 23;
    student2.name = "Bob";
    student2.gpa = 1.4;
    student2.enrolled=false;

    printStudent(student2);

}

void printStudent (student &student){
    std::cout << student.name << "\n";
    std::cout << student.age << "\n";
    std::cout << student.gpa << "\n";
    std::cout << student.enrolled << "\n" <<std::endl;
}
void changeGpa(student &student, double gpa){
    student.gpa = gpa;
}