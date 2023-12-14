#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <vector>
#include "product.h"


namespace client
{
    class Client
    {  
        public:

        Client(std::string id,std::string name, std::string surname,std::vector<product::Product> shoppingCart);
        std::string getName();
        std::string getSurname();
        std::string getId();
        std::vector<product::Product> getShoppingCart();
        void addToShoppingCart(product::Product product);
        void removeFromShoppingCart(std::string name);
        void showShoppingCart();
        void clearShoppingCart();





        private:

        std::string _name;
        std::string _surname;
        std::string _id;
        std::vector<product::Product> _shoppingCart;


    };
    std::ostream& operator<<(std::ostream& os, const Client& client);
}




#endif // CLIENT_H