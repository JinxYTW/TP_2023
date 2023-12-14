#include <iostream>
#include "shop.h"
#include "product.h"
#include "client.h"
#include "order.h"


int main() {
    shop::Shop EasyStore;
    int choice;
    int shopChoice = 0;
    std::string name;
    std::string id;
    std::string surname;
    std::string desc;
    double price;
    int quantity;
    std::vector<product::Product> shoppingCart;
    product::Product newProduct(name,desc, price, quantity);
    client::Client newClient(id,name, surname, shoppingCart);
    std::string orderId;
    bool status;

    while (true) {
        std::cout << "1. Gestion du magasin\n";
        std::cout << "2. Gestion des utilisateurs\n";
        std::cout << "3. Gestion des commandes\n";
        std::cout << "4. Quitter\n";
        std::cout << "Entrez votre choix : ";
        
        std::cin >> choice;

        switch (choice) {

            case 1: {
                
                std::cout << "1. Ajouter un produit\n";
                std::cout << "2. Afficher les produits\n";
                std::cout << "3. Mettre à jour les quantités\n";
                std::cout << "4. Retour\n";
                std::cout << "Entrez votre choix : ";
                std::cin >> shopChoice;

                switch (shopChoice) {
                    case 1:
                        // Ajouter un produit
                        std::cout << "Enter product name: ";
                        std::cin >> name;
                        std::cout << "Enter product description: ";
                        std::cin >> desc;
                        std::cout << "Enter product price: ";
                        std::cin >> price;
                        std::cout << "Enter product quantity: ";
                        std::cin >> quantity;
                        EasyStore.addProduct(newProduct);
                        std::cout << "Product added successfully.\n";
                        break;
                        
                    case 2:
                        // Afficher les produits
                        EasyStore.showProducts();
                        break;

                    case 3:
                        // Mettre à jour les quantités
                        std::cout << "Enter product name: ";
                        std::cin >> name;
                        std::cout << "Enter new product quantity: ";
                        std::cin >> quantity;
                        EasyStore.updateProduct(name, quantity);
                        std::cout << "Product quantity updated successfully.\n";
                        break;
                    case 4:
                        // Retour
                        break;
                    default:
                        std::cout << "Choix invalide\n";
                }
                break;
            }
            case 2: {
                // Gestion des utilisateurs
                int userChoice;
                std::cout << "1. Ajouter un utilisateur\n";
                std::cout << "2. Afficher les utilisateurs\n";
                std::cout << "3. Mettre à jour les informations de l'utilisateur\n";
                std::cout << "4. Retour\n";
                std::cout << "Entrez votre choix : ";
                std::cin >> userChoice;

                switch (userChoice) {
                    case 1:
                        // Ajouter un utilisateur
                        std::cout << "Enter client id: ";
                        std::cin >> id;
                        std::cout << "Enter client name: ";
                        std::cin >> name;
                        std::cout << "Enter client surname: ";
                        std::cin >> surname;
                        std::cout << "Enter client surname: ";
                        std::cin >> desc;
                        
                        EasyStore.addClient(newClient);
                        break;
                    case 2:
                        // Afficher les utilisateurs
                        EasyStore.showClients();
                        break;
                    case 3:
                        // Mettre à jour les informations de l'utilisateur
                        std::cout << "Enter client id: ";
                        std::cin >> id;
                        std::cout << "Enter new client name: ";
                        std::cin >> name;
                        std::cout << "Enter new client surname: ";
                        std::cin >> surname;
                        EasyStore.updateClient(id, name, surname);
                        std::cout << "Client information updated successfully.\n";

                        break;
                    case 4:
                        // Retour
                        break;
                    default:
                        std::cout << "Choix invalide\n";
                }
                break;
            }
            case 3:
                // Gestion des commandes
                int orderChoice;
                std::cout << "1. Créer une commande\n";
                std::cout << "2. Afficher les commandes\n";
                std::cout << "3. Mettre à jour le statut de la commande\n";
                std::cout << "4. Retour\n";
                std::cout << "Entrez votre choix : ";
                std::cin >> orderChoice;

                switch (orderChoice) {
                    case 1:
                        // Créer une commande
                        break;
                    case 2:
                        // Afficher les commandes
                        EasyStore.showOrders();
                        break;
                    case 3:
                        // Mettre à jour le statut de la commande
                        std::cout << "Enter order ID: ";
                        std::cin >> orderId;
                        std::cout << "Enter new status: ";
                        std::cin >> status;

                        EasyStore.updateOrder(orderId, status);

                        std::cout << "Order status updated successfully.\n";
                        break;

                        break;
                    case 4:
                        // Retour
                        break;
                    default:
                        std::cout << "Choix invalide\n";
                }
                            break;
            case 4:
                return 0;
            default:
                std::cout << "Choix invalide\n";
        }
    }

    return 0;
}
