#include <iostream>
using namespace std;

// Fonction qui vérifie si un nombre est multiple de 2
int multipleDe2(int n) {
    // Si le reste de la division par 2 est 0 → c’est un multiple de 2
    return (n % 2 == 0);
}

// Fonction qui vérifie si un nombre est multiple de 3
int multipleDe3(int n) {
    // Si le reste de la division par 3 est 0 → c’est un multiple de 3
    return (n % 3 == 0);
}

int main() {
    int nombre;
    cout << "Donnez un entier : ";
    cin >> nombre; // Lecture du nombre

    // Vérifie si le nombre est pair (multiple de 2)
    if (multipleDe2(nombre))
        cout << "Il est pair" << endl;

    // Vérifie si le nombre est multiple de 3
    if (multipleDe3(nombre))
        cout << "Il est multiple de 3" << endl;

    // Si le nombre est à la fois multiple de 2 et de 3, il est divisible par 6
    if (multipleDe2(nombre) && multipleDe3(nombre))
        cout << "Il est divisible par 6" << endl;

    return 0;
}
