#include <iostream>
#include <limits>

using namespace std;

long long factorial(int n) {

    long long result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

long long recursiveFactorial(int n) {

    if (n == 0) return 1;
    return n * recursiveFactorial(n - 1);

}

void printResult(int n, long long result) {

    cout << "Factorial(" << n << ") is " << result << endl;
}

// Max is 20: 21! overflows long long
int getUserInput(const string& description) {

    int input;
    bool isValid = false;

    while (!isValid) {

        cout << description << "\nEnter your number : ";
        cin >> input;

        if (cin.fail()) {
            cout << "Invalid input! An integer is expected.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (input < 0) {
            cout << "Invalid input! Integer must be positive.\n";
        } else if (input > 20) {
            cout << "Invalid input! Must be 20 or below to avoid integer overflow.\n";
        } else {
            isValid = true;
        }
    }

    return input;
}

int main() {

    int n = getUserInput("Enter the number you want the factorial of");
    printResult(n, factorial(n));
    printResult(n, recursiveFactorial(n));
    return 0;
}