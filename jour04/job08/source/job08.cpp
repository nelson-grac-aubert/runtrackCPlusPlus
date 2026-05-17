#include "../include/job08.hpp"

int main() {
    // C++ arrays require a single type — void* lets us store any address
    // we must cast back to the correct type when dereferencing
    int    val0 = 2019;
    string val1 = "La Plateforme";
    double val2 = 3.14;
    string val3 = "Etudiants";

    void* tab[4] = { &val0, &val1, &val2, &val3 };

    cout << "tab[0] @ " << tab[0] << " = " << *static_cast<int*>(tab[0])    << "\n";
    cout << "tab[1] @ " << tab[1] << " = " << *static_cast<string*>(tab[1]) << "\n";
    cout << "tab[2] @ " << tab[2] << " = " << *static_cast<double*>(tab[2]) << "\n";
    cout << "tab[3] @ " << tab[3] << " = " << *static_cast<string*>(tab[3]) << "\n";

    return 0;
}
