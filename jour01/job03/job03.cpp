#include <iostream>

void loopThatLoop(int n) 
{
for (int i = n; i > 0; i--) {
    std::cout << "Hello World!" << std::endl;
}
}

int main() 
{   
    loopThatLoop(5);
}