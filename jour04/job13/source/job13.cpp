#include "../include/job13.hpp"

// allocates a Destination from user input — caller must delete it
Destination* createDestination() {
    Destination* d = new Destination();
    cout << "Destination name  : "; getline(cin, d->name);
    cout << "Flight time (min) : "; cin >> d->flightTime;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return d;
}

void displayDestinations(const vector<Destination*>& dests) {
    for (int i = 0; i < (int)dests.size(); i++)
        cout << "[" << i << "] " << dests[i]->name
             << " — " << dests[i]->flightTime << " min\n";
}

void modifyDestination(Destination* d) {
    cout << "New name          : "; getline(cin, d->name);
    cout << "New flight time   : "; cin >> d->flightTime;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void freeDestinations(vector<Destination*>& dests) {
    for (Destination* d : dests) delete d;
    dests.clear();
}

int main() {
    cout << "How many destinations ? ";
    int count; cin >> count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<Destination*> destinations;
    for (int i = 0; i < count; i++) {
        cout << "\n-- Destination #" << i + 1 << " --\n";
        destinations.push_back(createDestination());
    }

    cout << "\n-- All destinations --\n";
    displayDestinations(destinations);

    cout << "\n-- Modify all destinations --\n";
    for (Destination* d : destinations) {
        cout << "Modifying : " << d->name << "\n";
        modifyDestination(d);
    }

    cout << "\n-- Updated destinations --\n";
    displayDestinations(destinations);

    freeDestinations(destinations);
    return 0;
}
