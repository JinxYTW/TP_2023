#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <vector>
#include "product.h"
#include "client.h"
#include "order.h"


namespace shop
{
    class Shop
    {

    public:
    //Shop
    Shop();
    //Product
    void addProduct(product::Product product);
    void showProducts();
    void showProduct(std::string name);
    void updateProduct(std::string name, int quantity);
    //Client
    void addClient(client::Client client);
    void showClients();
    void showClient(std::string id);
   
    void removeProductFromShoppingCart(std::string id,std::string productname);
    void updateQuantityShoppingCart(std::string id, std::string name, int quantity);
    void upadateQuantityInShoppingCart(std::string id, std::string name, int quantity);
    //Commande
    void valideOrder(std::string id);
    void updateOrder(std::string id, bool orderstatus);
    void showOrders();
    void showOrder(std::string id);

    
    private:

    std::vector<product::Product> _products;
    std::vector<client::Client> _clients;
    std::vector<order::Order> _orders;




    };
}

#endif // SHOP_H