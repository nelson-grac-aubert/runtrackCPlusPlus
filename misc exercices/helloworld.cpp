// # : instruction de préprocesseur, transforme le code avant la compilation 
#include <iostream>

void add(int myInt) {
    myInt += 1;
    std::cout << "Adresse memoire de myInt (dans la scope de la fonction donc différente): " << &myInt << std::endl; 
}

void addThroughPointer(int *myInt) {
    *myInt += 1;
    std::cout << "Adresse memoire de a (accedee par pointeur donc la meme que dans la scope de a): " << myInt << std::endl;
}

int main() 
{ 
    std::cout << "Hello World!" << std::endl;

    int a = 42;
    int *b = &a; 

    std::cout << "Valeur de b : " << b << std::endl;
    std::cout << "Valeur de *b : " << *b << std::endl;
    std::cout << "Adresse memoire de a : "<< &a << std::endl;

    add(a);
    std::cout << "Valeur de a apres avoir ajoute 1 mais que dans la scope de la fonction : " << a << std::endl;

    addThroughPointer(&a); 
    std::cout << "Valeur de a apres avoir ajoute 1 par son pointeur : " << a << std::endl;

    return 0;
}