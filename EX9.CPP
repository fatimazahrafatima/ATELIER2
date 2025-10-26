#include <iostream>
#include <cmath>
#include <string>

class vecteur3d {
private:
    float x, y, z;

public:
    // Constructeur avec valeurs par défaut
    vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // Fonction d'affichage
    void afficher() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    // Somme de 2 vecteurs
    vecteur3d somme(const vecteur3d& v) const {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }

    // Produit scalaire
    float produitScalaire(const vecteur3d& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // Vérifie si deux vecteurs ont mêmes composantes
    bool coincide(const vecteur3d& v) const {
        return (x == v.x) && (y == v.y) && (z == v.z);
    }

    // Norme du vecteur
    float norme() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // normax - version par valeur
    static vecteur3d normax_valeur(vecteur3d v1, vecteur3d v2) {
        return (v1.norme() >= v2.norme()) ? v1 : v2;
    }

    // normax - version par adresse
    static vecteur3d* normax_adresse(vecteur3d* v1, vecteur3d* v2) {
        return (v1->norme() >= v2->norme()) ? v1 : v2;
    }

    // normax - version par référence
    static vecteur3d& normax_reference(vecteur3d& v1, vecteur3d& v2) {
        return (v1.norme() >= v2.norme()) ? v1 : v2;
    }

    // Getters pour accéder aux composantes
    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }
};

// Test de la classe vecteur3d
void test_vecteur3d() {
    std::cout << "=== TEST VECTEUR3D ===" << std::endl;
    
    vecteur3d v1(1, 2, 3);
    vecteur3d v2(4, 5, 6);
    vecteur3d v3(1, 2, 3);

    std::cout << "Vecteur 1: ";
    v1.afficher();
    std::cout << "Vecteur 2: ";
    v2.afficher();
    std::cout << "Vecteur 3: ";
    v3.afficher();

    std::cout << "Somme v1 + v2: ";
    vecteur3d somme = v1.somme(v2);
    somme.afficher();

    std::cout << "Produit scalaire v1.v2: " << v1.produitScalaire(v2) << std::endl;
    std::cout << "v1 coincide avec v2: " << (v1.coincide(v2) ? "Oui" : "Non") << std::endl;
    std::cout << "v1 coincide avec v3: " << (v1.coincide(v3) ? "Oui" : "Non") << std::endl;
    std::cout << "Norme de v1: " << v1.norme() << std::endl;
    std::cout << "Norme de v2: " << v2.norme() << std::endl;

    // Test des différentes versions de normax
    std::cout << "\n--- Tests normax ---" << std::endl;
    
    // Par valeur
    vecteur3d resultat_valeur = vecteur3d::normax_valeur(v1, v2);
    std::cout << "Normax (valeur): ";
    resultat_valeur.afficher();

    // Par adresse
    vecteur3d* resultat_adresse = vecteur3d::normax_adresse(&v1, &v2);
    std::cout << "Normax (adresse): ";
    resultat_adresse->afficher();

    // Par référence
    vecteur3d& resultat_reference = vecteur3d::normax_reference(v1, v2);
    std::cout << "Normax (référence): ";
    resultat_reference.afficher();
}