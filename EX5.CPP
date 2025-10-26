#include <iostream>
using namespace std;

int main() {
    int a = 10;           // 1. déclaration d’un entier
    int& ref_a = a;       // 2. référence vers 'a'
    int* p_a = &a;        // 3. pointeur vers 'a'

    // 4. affichage
    cout << "Valeur de a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;

    cout << "Valeur de ref_a (référence) : " << ref_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;

    cout << "Valeur du pointeur p_a : " << p_a << endl;       // adresse pointée
    cout << "Valeur pointée par p_a : " << *p_a << endl;      // contenu de l’adresse
    cout << "Adresse de p_a (le pointeur lui-même) : " << &p_a << endl;

    return 0;
}
