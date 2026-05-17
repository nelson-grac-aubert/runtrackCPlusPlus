#include "../include/Animal.hpp"

int Animal::totalAnimaux = 0; // static member must be defined outside the class

Animal::Animal()  { totalAnimaux++; }
Animal::~Animal() { totalAnimaux--; }

int Animal::getTotalAnimaux() { return totalAnimaux; }
