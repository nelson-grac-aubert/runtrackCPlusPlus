#include "../include/job11.hpp"

int getUserInput(int numero) {

    int input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter integer #" << numero + 1 << ": ";
        cin >> input;

        if (cin.fail()) {
            cout << "Invalid input! An integer is expected.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            inputIsValid = true;
        }
    }

    return input;
}

int* buildTheArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = getUserInput(i);
    return arr;
}

// % is the modulo operator — n % 2 == 0 means n is even
int sumOfEvenElements(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int main() {

    const int SIZE = 10;

    int* theArray = buildTheArray(SIZE);

    cout << "Sum of even elements : " << sumOfEvenElements(theArray, SIZE) << "\n";

    delete[] theArray;
    theArray = nullptr;

    return 0;
}