#include <iostream>

int add (int a, int b) {

    int result = a + b;
    std::cout << a << "+" << b << "=" << result << std::endl; 
    return result; 
    
}

int main() { 

    add(1,2);
    add(4,5);
    add(4,-5);
    return 0;
}