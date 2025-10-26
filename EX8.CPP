#include <iostream>
#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // 1. Constructeur par défaut
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0f), vitesse(0.0f) {
        std::cout << "Voiture créée avec le constructeur par défaut" << std::endl;
    }

    // 2. Constructeur avec paramètres
    Voiture(std::string m, std::string mod, int a, float km, float v) 
        : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {
        std::cout << "Voiture créée avec le constructeur paramétré" << std::endl;
    }

    // 3. Méthode accélérer
    void accelerer(float valeur) {
        vitesse += valeur;
        std::cout << "Accélération de " << valeur << " km/h. Vitesse actuelle: " << vitesse << " km/h" << std::endl;
    }

    // 4. Méthode freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
        std::cout << "Freinage de " << valeur << " km/h. Vitesse actuelle: " << vitesse << " km/h" << std::endl;
    }

    // 5. Méthode afficherInfo
    void afficherInfo() {
        std::cout << "=== Informations de la voiture ===" << std::endl;
        std::cout << "Marque: " << marque << std::endl;
        std::cout << "Modèle: " << modele << std::endl;
        std::cout << "Année: " << annee << std::endl;
        std::cout << "Kilométrage: " << kilometrage << " km" << std::endl;
        std::cout << "Vitesse: " << vitesse << " km/h" << std::endl;
        std::cout << "==================================" << std::endl;
    }

    // 6. Méthode avancer
    void avancer(float distance) {
        kilometrage += distance;
        std::cout << "Avancement de " << distance << " km. Kilométrage total: " << kilometrage << " km" << std::endl;
    }

    // 7. Destructeur
    ~Voiture() {
        std::cout << "La voiture " << marque << " " << modele << " est détruite." << std::endl;
    }
};

// Exemple d'utilisation
int main() {
    // Test du constructeur par défaut
    Voiture voiture1;
    voiture1.afficherInfo();
    
    // Test du constructeur avec paramètres
    Voiture voiture2("Renault", "Clio", 2020, 15000.5f, 0.0f);
    voiture2.afficherInfo();
    
    // Test des méthodes
    voiture2.accelerer(50.0f);
    voiture2.avancer(100.0f);
    voiture2.freiner(20.0f);
    voiture2.afficherInfo();
    
    // Test avec vitesse négative
    voiture2.freiner(40.0f);
    voiture2.afficherInfo();
    
    return 0;
}