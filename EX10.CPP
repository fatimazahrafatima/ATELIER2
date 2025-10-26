#include <iostream>
#include <cmath>

class NombreComplexe {
private:
    double reel, imaginaire;

public:
    // Constructeur
    NombreComplexe(double r = 0, double i = 0) : reel(r), imaginaire(i) {}

    // Getters
    double getReel() const { return reel; }
    double getImaginaire() const { return imaginaire; }

    // Surcharge des opérateurs
    bool operator==(const NombreComplexe& other) const {
        return (reel == other.reel) && (imaginaire == other.imaginaire);
    }

    NombreComplexe operator+(const NombreComplexe& other) const {
        return NombreComplexe(reel + other.reel, imaginaire + other.imaginaire);
    }

    NombreComplexe operator-(const NombreComplexe& other) const {
        return NombreComplexe(reel - other.reel, imaginaire - other.imaginaire);
    }

    NombreComplexe operator*(const NombreComplexe& other) const {
        return NombreComplexe(
            reel * other.reel - imaginaire * other.imaginaire,
            reel * other.imaginaire + imaginaire * other.reel
        );
    }

    NombreComplexe operator/(const NombreComplexe& other) const {
        double denominateur = other.reel * other.reel + other.imaginaire * other.imaginaire;
        if (denominateur == 0) {
            std::cout << "Erreur: Division par zero!" << std::endl;
            return NombreComplexe(0, 0);
        }
        return NombreComplexe(
            (reel * other.reel + imaginaire * other.imaginaire) / denominateur,
            (imaginaire * other.reel - reel * other.imaginaire) / denominateur
        );
    }

    // Affichage
    void afficher() const {
        if (imaginaire >= 0)
            std::cout << reel << " + " << imaginaire << "i";
        else
            std::cout << reel << " - " << -imaginaire << "i";
    }

    // Affichage détaillé
    void afficherDetails(const std::string& operation) const {
        std::cout << operation << " = ";
        afficher();
        std::cout << std::endl;
    }
};

// Fonction pour le menu des nombres complexes
void menu_complexes() {
    double r1, i1, r2, i2;
    int choix;

    std::cout << "\n=== CALCULATRICE DE NOMBRES COMPLEXES ===" << std::endl;
    
    // Saisie des nombres complexes
    std::cout << "Premier nombre complexe:" << std::endl;
    std::cout << "Partie reelle: ";
    std::cin >> r1;
    std::cout << "Partie imaginaire: ";
    std::cin >> i1;

    std::cout << "Deuxieme nombre complexe:" << std::endl;
    std::cout << "Partie reelle: ";
    std::cin >> r2;
    std::cout << "Partie imaginaire: ";
    std::cin >> i2;

    NombreComplexe z1(r1, i1);
    NombreComplexe z2(r2, i2);

    do {
        std::cout << "\n--- MENU OPERATIONS ---" << std::endl;
        std::cout << "1. Egalite" << std::endl;
        std::cout << "2. Addition" << std::endl;
        std::cout << "3. Soustraction" << std::endl;
        std::cout << "4. Multiplication" << std::endl;
        std::cout << "5. Division" << std::endl;
        std::cout << "6. Afficher les nombres" << std::endl;
        std::cout << "0. Quitter" << std::endl;
        std::cout << "Votre choix: ";
        std::cin >> choix;

        switch (choix) {
            case 1: {
                std::cout << "z1 = "; z1.afficher(); std::cout << std::endl;
                std::cout << "z2 = "; z2.afficher(); std::cout << std::endl;
                std::cout << "z1 == z2: " << (z1 == z2 ? "Vrai" : "Faux") << std::endl;
                break;
            }
            case 2: {
                NombreComplexe resultat = z1 + z2;
                std::cout << "("; z1.afficher(); std::cout << ") + ("; z2.afficher(); 
                std::cout << ") = "; resultat.afficher(); std::cout << std::endl;
                break;
            }
            case 3: {
                NombreComplexe resultat = z1 - z2;
                std::cout << "("; z1.afficher(); std::cout << ") - ("; z2.afficher(); 
                std::cout << ") = "; resultat.afficher(); std::cout << std::endl;
                break;
            }
            case 4: {
                NombreComplexe resultat = z1 * z2;
                std::cout << "("; z1.afficher(); std::cout << ") * ("; z2.afficher(); 
                std::cout << ") = "; resultat.afficher(); std::cout << std::endl;
                break;
            }
            case 5: {
                NombreComplexe resultat = z1 / z2;
                std::cout << "("; z1.afficher(); std::cout << ") / ("; z2.afficher(); 
                std::cout << ") = "; resultat.afficher(); std::cout << std::endl;
                break;
            }
            case 6: {
                std::cout << "z1 = "; z1.afficher(); std::cout << std::endl;
                std::cout << "z2 = "; z2.afficher(); std::cout << std::endl;
                break;
            }
            case 0:
                std::cout << "Au revoir!" << std::endl;
                break;
            default:
                std::cout << "Choix invalide!" << std::endl;
        }
    } while (choix != 0);
}

// Programme principal
int main() {
    // Test de la classe vecteur3d
    test_vecteur3d();
    
    // Test de la classe NombreComplexe
    menu_complexes();

    return 0;
}