#include "../include/job07.hpp"

int main() {
    int tab[]  = {10, 20, 30, 40, 50};
    int size   = sizeof(tab) / sizeof(tab[0]); // total bytes / one element's bytes

    for (int i = 0; i < size; i++) {
        // tab + i is equivalent to &tab[i]
        cout << "tab[" << i << "] @ " << (tab + i) << " = " << tab[i] << "\n";
    }

    return 0;
}
