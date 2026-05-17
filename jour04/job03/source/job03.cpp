#include "../include/job03.hpp"

string getUserInput() {
    string input;
    while (input.empty()) {
        cout << "Enter a string : ";
        getline(cin, input);
        if (input.empty()) cout << "String cannot be empty.\n";
    }
    return input;
}

// reverses char array in place using two pointers walking inward
void reverseString(char* str, int length) {
    char* left  = str;
    char* right = str + length - 1;

    while (left < right) {
        char temp = *left;
        *left  = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main() {
    string input = getUserInput();
    int    size  = input.length();

    char* arr = new char[size + 1];
    for (int i = 0; i < size; i++) arr[i] = input[i];
    arr[size] = '\0';

    reverseString(arr, size);
    cout << "Reversed : " << arr << "\n";

    delete[] arr;
    arr = nullptr;

    return 0;
}
