#include <iostream>
/*
dynmic memory =  Memory that is allocated after the program is already compiled and runnning.
                 Use the 'new' operator to allocated memory in the heap rather than the stack

                 Useful when we dont know how much memory we will need. Makes our programs more flexible, especially
                 when accepting user  input;

*/
int main(){
   char *pGrades = NULL;
   int size;

   std::cout << "How many grades to enter in?: " << std::endl;
   std::cin >> size;

   pGrades = new char[size];

   for(int i =0; i< size; i++){
       std::cout << "Enter grade #" << i+1 << ":";
       std::cin >> pGrades[i];
   }

   for(int i = 0; i < size; i++){
       std::cout << pGrades[i] << " " ;
   }
   std::cout << "\n" ;

   delete[] pGrades; //Free memory
   std::cout<< "PGrades address" <<  pGrades << std::endl;

}

