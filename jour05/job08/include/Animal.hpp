#pragma once
#include <iostream>
using namespace std;

class Animal {
private:
    static int totalAnimaux; // job09: tracks all living Animal instances

public:
    Animal();
    virtual ~Animal();

    virtual void crier()  = 0; // pure virtual — Animal is abstract, cannot be instantiated
    virtual void manger() = 0;

    static int getTotalAnimaux();
};
