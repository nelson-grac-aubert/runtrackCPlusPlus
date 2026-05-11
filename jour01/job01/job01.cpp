#include <iostream>

int main() { 
    char c = '\x01';
    short int p = 10; 

    // Quels sont les types et les résultats des expressions suivantes? 

    // En C++; lorsqu'une short int est utilisée dans une expression, elle est convertie en int
    // 3 est une int 
    // x est donc une int égale à 13 
    int x = p + 3; 
    std::cout << "short int 10 + int 3 = int " << x << std::endl;

    char y = c + 1; 
    std::cout << "le charactere c est " << c << std::endl;
    std::cout << "char c + 1 =  " << y << std::endl;
    // N'affiche rien car \x01 et \x02 sont des caractères ASCII non imprimables! 
    // Ce sont des caractères de contrôle
    // Respectivement SOH (start of heading), et STX (start of text) 
    // Ils n'ont pas de représentation visuelle et ne donnent rien en cout 

    int z = p + c;
    char zchar = p + c; 
    std::cout << "int p + char c = " << z << std::endl;
    // On dirait bien que le char \x01 est converti en son int 1 
    // testons! 
    int z2 = p + y; 
    std::cout << "int p + char y qui est 2, on attend donc 12 = " << z2 << std::endl;
    // youpi

    int w = 3 * p + 5 * c; 
    char wChar = 3 * p + 5 * c; 
    std::cout << "cette operation de l'enfer = " << w << std::endl;
    std::cout << "cette operation de l'enfer = " << wChar << std::endl;
    // Attention on peut typer et un char, et une int
    // J'image que c'est également possible plus haut mais en dessous de 32 les charactères ne sont pas imprimables, donc
    // chiant a vérifier
    // Du coup cet énoncé de l'exercice m'énerve. 
}