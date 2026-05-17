#include "../include/Operation.hpp"

int main() {
    Operation a(10.0);
    Operation b(3.0);
    Operation zero(0.0);

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n\n";

    cout << "a + b = " << (a + b) << "\n";
    cout << "a - b = " << (a - b) << "\n";
    cout << "a * b = " << (a * b) << "\n";
    cout << "a / b = " << (a / b) << "\n";
    cout << "a / 0 = " << (a / zero) << "\n\n";

    cout << "a == b : " << (a == b ? "true" : "false") << "\n";
    cout << "a != b : " << (a != b ? "true" : "false") << "\n";
    cout << "a >  b : " << (a >  b ? "true" : "false") << "\n";
    cout << "a <  b : " << (a <  b ? "true" : "false") << "\n";

    return 0;
}
