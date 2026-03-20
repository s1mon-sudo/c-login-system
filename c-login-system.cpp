#include <iostream>
#include <string>

using namespace std;

int main() {
    string richtigerName = "admin";
    string richtigesPasswort = "1234";

    string nameEingabe;
    string passEingabe;

    cout << "Bitte Benutzernamen eingeben: ";
    cin >> nameEingabe;

    cout << "Bitte Passwort eingeben: ";
    cin >> passEingabe;

    if (nameEingabe == richtigerName && passEingabe == richtigesPasswort) {
        cout << "Login erfolgreich! Willkommen zurueck." << endl;
    } 
    else {
        cout << "Zugriff verweigert: Name oder Passwort ist falsch." << endl;
    }

    return 0;
}