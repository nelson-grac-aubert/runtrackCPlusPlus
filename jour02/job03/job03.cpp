#include <iostream>
using namespace std; 

int main() {

    int i, n, sum; 
    sum = i = 0; 

    while (i < 4) {
        cout << "Type an integer : ";
        cin >> n;
        sum += n;
        i++;

    }

    cout << "The sum is " << sum; 

    return 0;
}
