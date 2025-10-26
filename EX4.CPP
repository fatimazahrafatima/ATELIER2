#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    // Allocation dynamique du premier tableau
    int* tab = new int[n];
    cout << "Entrez " << n << " entiers :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    // Création d’un deuxième tableau pour les carrés
    int* carre = new int[n];
    for (int i = 0; i < n; i++) {
        carre[i] = tab[i] * tab[i];
    }

    // Suppression du premier tableau
    delete[] tab;
    tab = nullptr;

    // Affichage du tableau des carrés
    cout << "Les carrés des nombres sont :" << endl;
    for (int i = 0; i < n; i++) {
        cout << carre[i] << " ";
    }
    cout << endl;

    // Suppression du second tableau
    delete[] carre;
    carre = nullptr;

    return 0;
}
