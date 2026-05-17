#include "../include/Chien.hpp"
#include "../include/Chat.hpp"

int main() {

    // job08: instantiate and call virtual methods
    cout << "=== Animals ===\n";
    Chien rex;
    Chien buddy;
    Chat  felix;
    Chat  whiskers;

    rex.crier();
    rex.manger();
    felix.crier();
    felix.manger();

    // job09: static counter reflects all Animal subclass instances
    cout << "\nTotal animals created : " << Animal::getTotalAnimaux() << "\n";

    // job10: overloaded manger on Chat
    cout << "\n=== Chat::manger overload ===\n";
    felix.manger("des croquettes");
    felix.manger("des brocolis");

    return 0;
}
