#include <iostream>
#include<ctime>

int main(){
    //pseudo-random - NOT truly random( but close)

    srand(time(0));
    
    int randNum =  (rand() % 5) + 1;

    switch(randNum){
        case 1:
            std::cout << "1" << std::endl;
            break;
        case 2:
            std::cout << "2" << std::endl;
            break;
        case 3:
            std::cout << "3" << std::endl;
            break;
        case 4:
            std::cout << "4" << std::endl;
            break;
        case 5:
            std::cout << "5" << std::endl;
            break;
        case 6:
            std::cout << "6" << std::endl;
            break;
    }

    return 0;
}