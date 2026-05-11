#include <iostream>

int multiply (int a, int b) {

    int result = a * b;
    std::cout << a << "x" << b << "=" << result << std::endl; 
    return result; 
    
}

int main() { 

    multiply(1,2);
    multiply(4,5);
    multiply(4,-5);
    return 0;
}