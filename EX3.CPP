
//FORMALISME TABLEAU
#include <iostream>
using namespace std;

int main() {
    int tab[10]; // Tableau de 10 entiers

    // --- Lecture des 10 nombres ---
    cout << "Entrez 10 nombres entiers :" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tab[i]; // On lit dans le tableau
    }

    // --- Recherche du plus grand et du plus petit ---
    int max = tab[0];
    int min = tab[0];

    for (int i = 1; i < 10; i++) {
        if (tab[i] > max) max = tab[i];
        if (tab[i] < min) min = tab[i];
    }

    // --- Affichage ---
    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;

    return 0;
}
  //FORMALISME POINTEUR
  #include <iostream>
using namespace std;

int main() {
    int tab[10]; // Tableau
    int *p = tab; // Pointeur sur le premier élément du tableau

    // --- Lecture ---
    cout << "Entrez 10 nombres entiers :" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> *(p + i); // Utilisation du pointeur
    }

    // --- Recherche max / min ---
    int max = *p;
    int min = *p;

    for (int i = 1; i < 10; i++) {
        if (*(p + i) > max) max = *(p + i);
        if (*(p + i) < min) min = *(p + i);
    }

    // --- Affichage ---
    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;

    return 0;
}
