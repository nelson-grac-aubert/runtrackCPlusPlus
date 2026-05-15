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

// Returns a heap-allocated array of `size` ints — caller must free() it
int* buildTheArray(int size) {
    // malloc returns void* : we cast it to int*
    // malloc doesn't initialize memory, values are garbage until assigned
    int* arr = (int*)malloc(size * sizeof(int));

    if (arr == nullptr) { // malloc can fail (out of memory)
        cerr << "Memory allocation failed!\n";
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        // arr[i] and *(arr + i) are strictly equivalent — arr[i] is syntactic sugar
        arr[i] = getUserInput(i);
    }

    return arr; // we return the pointer, not a copy of the data
}

// Takes a pointer to the first element — the array decays to a pointer anyway
int countAboveOrEqualFive(int* arr, int size) {

    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 5) {
            counter++;
        }
    }

    cout << "Numbers >= 5 : " << counter << "\n";
    return counter;
}

int main() {

    const int SIZE = 10;

    int* theArray = buildTheArray(SIZE); // theArray holds the heap address
    countAboveOrEqualFive(theArray, SIZE);

    free(theArray); // we own the memory → we free it
    theArray = nullptr; // good habit: avoids dangling pointer usage

    return 0;
}