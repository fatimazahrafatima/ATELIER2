#include <iostream>
using namespace std;

// Fonction sans argument ni retour
void compteurAppel() {
    // 'static' garde la valeur même après la fin de la fonction
    static int compteur = 0;
    compteur++; // On augmente le nombre d'appels
    cout << "Appel numéro " << compteur << endl;
}

int main() {
    // On appelle plusieurs fois la fonction
    compteurAppel(); // 1er appel
    compteurAppel(); // 2e appel
    compteurAppel(); // 3e appel
    return 0;
}
