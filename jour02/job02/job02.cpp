// Prédiction : 0 nul, 1 rien, 4 rien, 10 grand, -5 grand

#include <iostream>

int main() {

    int n; 

    std::cin >> n;

    switch (n) {
        case 0 : std::cout << "Nul\n";
        case 1 : 
        case 2 : std::cout << "Petit\n";
            break;
        case 3 : 
        case 4 : 
        case 5 : std::cout << "Moyen\n";
        default : std::cout << "Grand\n";
    }

    return 0;

}

/* PS C:\Users\graca\Desktop\La plateforme\JVSI 1er semestre\runtrackCPlusPlus\repogithub\runtrackCPlusPlus\jour02\job02> ./job02                          
0           
Nul
Petit
PS C:\Users\graca\Desktop\La plateforme\JVSI 1er semestre\runtrackCPlusPlus\repogithub\runtrackCPlusPlus\jour02\job02> ./job02
1
Petit
PS C:\Users\graca\Desktop\La plateforme\JVSI 1er semestre\runtrackCPlusPlus\repogithub\runtrackCPlusPlus\jour02\job02> ./job02                          
4           
Moyen
Grand
PS C:\Users\graca\Desktop\La plateforme\JVSI 1er semestre\runtrackCPlusPlus\repogithub\runtrackCPlusPlus\jour02\job02> ./job02                          
10          
Grand
PS C:\Users\graca\Desktop\La plateforme\JVSI 1er semestre\runtrackCPlusPlus\repogithub\runtrackCPlusPlus\jour02\job02> ./job02                          
-5          
Grand
PS C:\Users\graca\Desktop\La plateforme\JVSI 1er semestre\runtrackCPlusPlus\repogithub\runtrackCPlusPlus\jour02\job02> */

// OMG fascinant et relou, bien faire attention aux break!!!!!!!!!!