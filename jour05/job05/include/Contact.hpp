#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    int    numero;

public:
    Contact(const string& nom, int numero);
    Contact(const Contact& other); // copy constructor — deep independent copy

    void setNumero(int numero);
    void afficher() const;
};
