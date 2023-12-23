#include <iostream>

int main(){

    //This is a comment
    /*
    Multiline comment

    */
    std::cout << "I like Pizza!" << std::endl;
    std::cout << "Its really good to learn C++" << std::endl;;

    // Data Types 
    // Integer(whole Number)
    int age = 34;
    int year = 2023;
    int days = 7.5;

    //double (include decimal)
    double  price = 10.99;
    double gpa = 2.5;
    double temperature  = 25.1;

    //Single character
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    //boolean (true / false)
     bool isValid = false;
     bool forSale = true;


     //string (objects that represents a sequence)
     std::string name = "Bro";
     std::string day = "Friday";
     std::string food = "pizza";

     std::cout << "Hello " << name << '\n';


    return 0;
}