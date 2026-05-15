#include "../include/job06.hpp"

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

// Returns a heap-allocated array — caller must delete[] it
int* buildTheArray(int size) {
    // new int[size] : no cast needed, throws std::bad_alloc if it fails
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = getUserInput(i);
    }

    return arr;
}

int countAboveOrEqualFive(int* arr, int size) {

    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 5)
            counter++;
    }

    cout << "Numbers >= 5 : " << counter << "\n";
    return counter;
}

int main() {

    const int SIZE = 10;

    int* theArray = buildTheArray(SIZE);
    countAboveOrEqualFive(theArray, SIZE);

    delete[] theArray; // [] is mandatory for arrays — delete alone is undefined behavior
    theArray = nullptr;

    return 0;
}