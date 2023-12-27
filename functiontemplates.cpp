#include<iostream>

//function templates
template <typename T, typename U>
U getMax(T x, U y) {
    return (x > y) ? x : y;
}


int main() {
    std::cout << getMax(3, 7) << std::endl;      // Outputs 7 (int)
    std::cout << getMax(2.5, 1.8) << std::endl;  // Outputs 2.5 (double)
    std::cout << getMax('a', 'z') << std::endl;  // Outputs 'z' (char)

    return 0;
}