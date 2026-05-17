#include "../include/Joueur.hpp"

Joueur::Joueur()                                   : x(0),  y(0),  nom("Unknown") {}
Joueur::Joueur(int x, int y)                       : x(x),  y(y),  nom("Unknown") {}
Joueur::Joueur(int x, int y, const string& nom)    : x(x),  y(y),  nom(nom)       {}

void Joueur::init(int x, int y, const string& nom) {
    this->x   = x;
    this->y   = y;
    this->nom = nom;
}

void Joueur::afficher() const {
    cout << "[" << nom << "] @ (" << x << ", " << y << ")\n";
}

void Joueur::deplacer(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

// job04: this-> makes the member reference explicit
Joueur& Joueur::setX(int x)              { this->x   = x;   return *this; }
Joueur& Joueur::setY(int y)              { this->y   = y;   return *this; }
Joueur& Joueur::setNom(const string& nom){ this->nom  = nom; return *this; }

int    Joueur::getX()   const { return this->x;   }
int    Joueur::getY()   const { return this->y;   }
string Joueur::getNom() const { return this->nom; }
