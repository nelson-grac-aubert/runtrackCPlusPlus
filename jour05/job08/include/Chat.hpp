#pragma once
#include "Animal.hpp"
#include <string>
using namespace std;

class Chat : public Animal {
public:
    void crier()  override;
    void manger() override;
    void manger(const string& nourriture); // job10: overload with parameter
};
