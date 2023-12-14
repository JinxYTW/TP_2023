#include <iostream>
#include "shop.h"

int main() {
    shop::Shop EasyStore;
    int choice;

    while (true) {
        std::cout << "1. Gestion du magasin\n";
        std::cout << "2. Gestion des utilisateurs\n";
        std::cout << "3. Gestion des commandes\n";
        std::cout << "4. Quitter\n";
        std::cout << "Entrez votre choix : ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int shopChoice;
                std::cout << "1. Ajouter un produit\n";
                std::cout << "2. Afficher les produits\n";
                std::cout << "3. Mettre à jour les quantités\n";
                std::cout << "4. Retour\n";
                std::cout << "Entrez votre choix : ";
                std::cin >> shopChoice;

                switch (shopChoice) {
                    case 1:
                        // Ajouter un produit
                        break;
                    case 2:
                        // Afficher les produits
                        break;
                    case 3:
                        // Mettre à jour les quantités
                        break;
                    case 4:
                        // Retour
                        break;
                    default:
                        std::cout << "Choix invalide\n";
                }
                break;
            }
            case 2:
                // Gestion des utilisateurs
                break;
            case 3:
                // Gestion des commandes
                break;
            case 4:
                return 0;
            default:
                std::cout << "Choix invalide\n";
        }
    }

    return 0;
}
