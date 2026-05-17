#include "../include/job11.hpp"

void displayStringArray(string* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << "  [" << i << "] " << arr[i] << "\n";
}

int main() {
    const int FRUIT_SIZE = 5;
    string fruit[FRUIT_SIZE] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};

    cout << "Available fruits :\n";
    displayStringArray(fruit, FRUIT_SIZE);

    cout << "\nHow many favorite fruits ? ";
    int count;
    cin >> count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string* favoris = new string[count]; // size decided at runtime

    for (int i = 0; i < count; i++) {
        cout << "Favorite #" << i + 1 << " : ";
        getline(cin, favoris[i]);
    }

    cout << "\nYour favorites :\n";
    displayStringArray(favoris, count);

    delete[] favoris;
    favoris = nullptr;

    return 0;
}
