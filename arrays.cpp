#include <iostream>


int searchValue(int array [], int size , int element);
int searchValueOptimized(int array [], int size , int element);

int main(){
    std::string students []  = {"Bob", "Agnes", "Richard", "Eunice"};

    int n =  sizeof(students) / sizeof(std::string);

    for(int i = 0; i < n; i++){
        std::cout << "Student name is:  " << students[i] << std::endl;
    }

    char grades [] = {'A', 'B','C','D','E'};
    int x =  sizeof(grades)/sizeof(char);
    for(int i = 0; i < x; i++){
        std::cout << "Grade : " << i  << " is : " << grades[i] << std::endl;
    }

    std::cout << "****************Searching Elements*********" << std::endl;

    int numbers [] = {1, 2, 3,4,5,6,7,8,9, 10};

    const int SIZE =100;
   
    std::string foods [SIZE];

    fill(foods, foods + SIZE , "Pizza");
  
    for( std::string food : foods ) {
        std::cout << "Food is " << food << std::endl;
    }
  

    int size = sizeof(numbers) / sizeof(int);
    int myNum;

    std::cout << "Enter the number you want to search :" <<  std::endl;
    std::cin >> myNum;
    int index =  searchValueOptimized(numbers,size, myNum);
   
    if(index != -1){
        std::cout << "The number " << myNum << " was found at index " << index << std::endl;
    }else{
        std::cout << "The number " << myNum << " was not found" << std::endl;
    }

}

int searchValue(int array [], int size , int element){
   int index = 0;
   for(int i = 0; i < size; i++){
       if(array[i] == element){
           return i;
       }
   }
   return -1;
}

int searchValueOptimized(int array [], int size , int element){
   int left = 0;
   int right= size -1;
    while(left <= right){
        int mid = left + (right- left) / 2 ;
        if(array[mid] == element){
            return mid;
        }else if(element >  array[mid]){
             left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
   return -1;
}