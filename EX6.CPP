#include <iostream>
using namespace std;

// Fonction qui incrémente la valeur pointée
void incrementer(int* p) {
    (*p)++; // on ajoute 1 à la valeur pointée
}

// Fonction qui permute deux valeurs via leurs adresses
void permuter(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Avant incrementer : a = " << a << endl;
    incrementer(&a); // on envoie l'adresse de a
    cout << "Apres incrementer : a = " << a << endl;

    cout << "\nAvant permuter : a = " << a << ", b = " << b << endl;
    permuter(&a, &b); // on envoie les adresses
    cout << "Apres permuter : a = " << a << ", b = " << b << endl;

    return 0;
}
