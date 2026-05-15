#include "../include/job07.hpp"    

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

int findIndexOfHighest(int* theArray, int size) {

    int tempHighestIndex = 0; 
    int tempHighestValue = theArray[0];

    for (int i= 0; i < size; i++) {
        if (theArray[i] >= tempHighestValue) {
            tempHighestValue = theArray[i];
            tempHighestIndex = i;
        }
    }

    return tempHighestIndex;
}

int main() {

    const int SIZE = 10; 

    int* theArray = buildTheArray(SIZE); 

    cout << "The index of the highest element of the array is " << findIndexOfHighest(theArray, SIZE) << endl;

    delete[] theArray; 
    theArray = nullptr;

    return 0;
}