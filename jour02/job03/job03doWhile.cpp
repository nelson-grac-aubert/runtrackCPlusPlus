#include <iostream>
using namespace std; 

int main() {

    int i, n, sum; 
    sum = i = 0; 

    do {
        cout << "Type an integer : ";
        cin >> n;
        sum += n;
        i++;

    }
    while (i < 4);

    cout << "The sum is " << sum; 

    return 0;
}
