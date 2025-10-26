#include <iostream>
using namespace std;

// Fonction récursive qui affiche toutes les permutations
void permuter(string s, int debut, int fin) {
    // Cas de base : si le début atteint la fin → afficher la chaîne
    if (debut == fin) {
        cout << s << endl;
        return;
    }

    // Boucle sur chaque position possible
    for (int i = debut; i <= fin; i++) {
        // On échange la lettre actuelle avec celle du début
        char temp = s[debut];
        s[debut] = s[i];
        s[i] = temp;

        // Appel récursif pour le reste de la chaîne
        permuter(s, debut + 1, fin);

        // On remet les lettres dans leur ordre initial (backtracking)
        temp = s[debut];
        s[debut] = s[i];
        s[i] = temp;
    }
}

int main() {
    string mot;
    cout << "Entrez une chaine de caracteres : ";
    cin >> mot;

    cout << "Les permutations sont :" << endl;
    permuter(mot, 0, mot.length() - 1);

    return 0;
}
