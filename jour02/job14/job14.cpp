#include <iostream>
using namespace std;

// Count the number of digits in an int
int countDigits(int n) {

    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;
}

// Elevate digit to the power of pow
int power(int digit, int pow) {

    int result = 1;

    for (int i = 0; i < pow; i++) {
        result *= digit;
    }

    return result;
}

// Calculate the narcissistic sum of an int 
int narcissisticSum(int n) {

    int digits = countDigits(n);
    int sum = 0;
    int temp = n;

    while (temp != 0) {
        int d = temp % 10;
        sum += power(d, digits);
        temp /= 10;
    }

    return sum;
}


void isNarcissistic(int n) {
    if (narcissisticSum(n) == n) {
        cout << n << " is narcissistic!";
    }
    else {
        cout << n << " is NOT narcissistic!";
    }

    cout << endl;

}

int main() {

    isNarcissistic(5); // 5 ^ 1 = 5 yes
    isNarcissistic(11); // no
    isNarcissistic(153); // yes
    isNarcissistic(200); // no
    isNarcissistic(370); // yes

    return 0;
}
