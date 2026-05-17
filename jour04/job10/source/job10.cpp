#include "../include/job10.hpp"

void displayMenu() {
    cout << "\n=== Grade Manager ===\n"
         << "1. Add a grade\n"
         << "2. Display all grades\n"
         << "3. Delete a student grade\n"
         << "4. Display average\n"
         << "5. Quit\n"
         << "Choice : ";
}

void addNote(vector<Note*>& notes) {
    Note* n = new Note();
    cout << "Last name  : "; getline(cin, n->nom);
    cout << "First name : "; getline(cin, n->prenom);
    cout << "Grade      : "; cin >> n->grade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    notes.push_back(n);
    cout << "Grade added.\n";
}

void displayNotes(const vector<Note*>& notes) {
    if (notes.empty()) { cout << "No grades yet.\n"; return; }
    cout << "\n" << left << setw(15) << "Last name"
                         << setw(15) << "First name"
                         << "Grade\n"
         << string(35, '-') << "\n";
    for (const Note* n : notes)
        cout << setw(15) << n->nom << setw(15) << n->prenom << n->grade << "\n";
}

void deleteNote(vector<Note*>& notes) {
    if (notes.empty()) { cout << "No grades to delete.\n"; return; }

    string nom, prenom;
    cout << "Last name  : "; getline(cin, nom);
    cout << "First name : "; getline(cin, prenom);

    for (int i = 0; i < (int)notes.size(); i++) {
        if (notes[i]->nom == nom && notes[i]->prenom == prenom) {
            delete notes[i];
            notes.erase(notes.begin() + i); // erase shifts remaining elements
            cout << "Grade deleted.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void displayAverage(const vector<Note*>& notes) {
    if (notes.empty()) { cout << "No grades to average.\n"; return; }
    float sum = 0;
    for (const Note* n : notes) sum += n->grade;
    cout << "Average : " << sum / notes.size() << "\n";
}

void freeNotes(vector<Note*>& notes) {
    for (Note* n : notes) delete n;
    notes.clear();
}

int main() {
    vector<Note*> notes;
    int choice;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1: addNote(notes);        break;
            case 2: displayNotes(notes);   break;
            case 3: deleteNote(notes);     break;
            case 4: displayAverage(notes); break;
            case 5: cout << "Goodbye!\n";  break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    freeNotes(notes); // free all remaining heap-allocated notes before exit
    return 0;
}
