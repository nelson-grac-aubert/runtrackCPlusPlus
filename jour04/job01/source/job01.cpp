#include "../include/job01.hpp"

int main() {
    int  number = 2019;
    int* ptr    = &number; // & gives the address of number

    cout << "Value via pointer : " << *ptr << "\n"; // * dereferences
    cout << "Address of number : " << ptr  << "\n";

    return 0;
}
