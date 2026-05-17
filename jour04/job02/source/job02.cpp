#include "../include/job02.hpp"

// modifies both variables through their addresses — no return needed
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before : x = " << x << ", y = " << y << "\n";
    swap(&x, &y); // pass addresses, not values
    cout << "After  : x = " << x << ", y = " << y << "\n";

    return 0;
}
