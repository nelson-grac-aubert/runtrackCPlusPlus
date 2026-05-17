#include "../include/job12.hpp"

int main() {
    Staff staff[2] = {
        {"Cordial",   "Alicia"},
        {"Malardier", "Pierre"}
    };

    cout << "Staff first names :\n";
    for (int i = 0; i < 2; i++)
        cout << "  " << staff[i].prenom << "\n";

    cout << "\nHow many students ? ";
    int count;
    cin >> count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // vector grows automatically — no need to know size at compile time
    vector<Etudiant> students(count);
    for (int i = 0; i < count; i++) {
        cout << "Student #" << i + 1 << " last name  : "; getline(cin, students[i].nom);
        cout << "Student #" << i + 1 << " first name : "; getline(cin, students[i].prenom);
    }

    cout << "\nStudents first names :\n";
    for (const Etudiant& e : students)
        cout << "  " << e.prenom << "\n";

    return 0;
}
