#include "../include/job09.hpp"

int getPositiveInt(const string& prompt) {
    int val;
    while (true) {
        cout << prompt;
        cin >> val;
        if (!cin.fail() && val > 0) return val;
        cout << "Invalid. Please enter a positive integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    int size = getPositiveInt("Array size : ");

    int* arr = new int[size]; // heap allocation — size known only at runtime

    for (int i = 0; i < size; i++) {
        cout << "Enter integer #" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\nArray content :\n";
    for (int i = 0; i < size; i++)
        cout << "  arr[" << i << "] = " << arr[i] << "\n";

    delete[] arr;
    arr = nullptr;

    return 0;
}
