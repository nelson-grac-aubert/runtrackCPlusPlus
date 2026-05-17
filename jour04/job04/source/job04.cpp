#include "../include/job04.hpp"

int main() {
    int a = 1, b = 2, c = 3;

    int* pA = &a;
    int* pB = &b;
    int* pC = &c;

    cout << "Before : a=" << a << " b=" << b << " c=" << c << "\n";

    *pA = 10; // dereference — writes through the pointer
    *pB = 20;
    *pC = 30;

    cout << "After  : a=" << a << " b=" << b << " c=" << c << "\n";

    return 0;
}
