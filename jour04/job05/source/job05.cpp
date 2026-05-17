#include "../include/job05.hpp"

int main() {
    Point  p   = {0, 0};
    Point* ptr = &p;

    // ptr->x is shorthand for (*ptr).x
    ptr->x = 42;
    ptr->y = 99;

    cout << "x = " << ptr->x << "\n";
    cout << "y = " << ptr->y << "\n";

    return 0;
}
