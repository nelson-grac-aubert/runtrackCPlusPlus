#include "../include/job13.hpp"

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

int* buildSortedArray(int size) {

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        bool validOrder = false;
        while (!validOrder) {
            arr[i] = getUserInput(i);
            // enforce ascending order — each entry must be >= previous
            if (i == 0 || arr[i] >= arr[i - 1])
                validOrder = true;
            else
                cout << "Value must be >= " << arr[i - 1] << " (ascending order required).\n";
        }
    }

    return arr;
}

// classic merge algorithm — walks both arrays simultaneously with two indexes
int* mergeArrays(int* a, int sizeA, int* b, int sizeB) {

    int* merged = new int[sizeA + sizeB];
    int i = 0, j = 0, k = 0;

    // pick the smaller of the two current elements at each step
    while (i < sizeA && j < sizeB) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // one array may still have remaining elements — copy them
    while (i < sizeA)
        merged[k++] = a[i++];
    while (j < sizeB)
        merged[k++] = b[j++];

    return merged;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {

    const int SIZE_A = 5;
    const int SIZE_B = 5;

    cout << "-- First sorted array --\n";
    int* arrayA = buildSortedArray(SIZE_A);

    cout << "-- Second sorted array --\n";
    int* arrayB = buildSortedArray(SIZE_B);

    int* merged = mergeArrays(arrayA, SIZE_A, arrayB, SIZE_B);

    cout << "\nArray A    : "; printArray(arrayA, SIZE_A);
    cout << "Array B    : "; printArray(arrayB, SIZE_B);
    cout << "Merged     : "; printArray(merged, SIZE_A + SIZE_B);

    delete[] arrayA;
    delete[] arrayB;
    delete[] merged;
    arrayA = arrayB = merged = nullptr;

    return 0;
}