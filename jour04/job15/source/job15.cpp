#include "../include/job15.hpp"

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // int& val : val is a reference to each element — no copy made
    for (int& val : arr)
        cout << val << "\n";

    return 0;
}
