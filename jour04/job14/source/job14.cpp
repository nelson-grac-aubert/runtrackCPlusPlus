#include "../include/job14.hpp"

int main() {
    int  x   = 12;
    int& ref = x; // ref is an alias for x — same memory location, different name

    cout << "Before : x = " << x << "\n";
    ref = 99; // modifying ref directly modifies x
    cout << "After  : x = " << x << "\n";

    return 0;
}
