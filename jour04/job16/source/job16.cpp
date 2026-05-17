#include "../include/job16.hpp"

int getPositiveInt(const string& prompt) {
    int val;
    while (true) {
        cout << prompt;
        cin >> val;
        if (!cin.fail() && val > 0) return val;
        cout << "Invalid. Positive integer expected.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// single pass, no intermediate array — tracks max value directly
int findMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int size = getPositiveInt("Array size : ");
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter integer #" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Max value : " << findMax(arr, size) << "\n";

    delete[] arr;
    arr = nullptr;

    return 0;
}
