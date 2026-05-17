#include "../include/Contact.hpp"

Contact::Contact(const string& nom, int numero)
    : nom(nom), numero(numero) {}

// copy constructor — each member is copied independently
Contact::Contact(const Contact& other)
    : nom(other.nom), numero(other.numero) {}

void Contact::setNumero(int numero) { this->numero = numero; }

void Contact::afficher() const {
    cout << nom << " : " << numero << "\n";
}
