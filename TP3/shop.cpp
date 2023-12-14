#include "shop.h"
namespace shop
{
    Shop::Shop()
    {}

    void Shop::addProduct(product::Product product)
    {
        _products.push_back(product);
    }

    void Shop::showProducts()
    {
        for (int i = 0; i < _products.size(); i++)
        {
            std::cout << _products[i] << std::endl;
        }
    }

    void Shop::showProduct(std::string name)
    {
        for (int i = 0; i < _products.size(); i++)
        {
            if (_products[i].getName() == name)
            {
                std::cout << _products[i] << std::endl;
            }
        }
    }

    void Shop::updateProduct(std::string name, int quantity)
    {
        for (int i = 0; i < _products.size(); i++)
        {
            if (_products[i].getName() == name)
            {
                _products[i].setQuantity(quantity);
            }
        }
    }

    void Shop::addClient(client::Client client)
    {
        _clients.push_back(client);
    }
    void Shop::showClients()
    {
        for (int i = 0; i < _clients.size(); i++)
        {
            std::cout << _clients[i] << std::endl;
        }
    }
    void Shop::showClient(std::string id)
    {
        for (int i = 0; i < _clients.size(); i++)
        {
            if (_clients[i].getId() == id)
            {
                std::cout << _clients[i] << std::endl;
            }
        }
    }

    void Shop::removeProductFromShoppingCart(std::string id, std::string productname)
    {
        for (int i = 0; i < _clients.size(); i++)
        {
            if (_clients[i].getId() == id)
            {
                _clients[i].removeFromShoppingCart(productname);
            }
        }
    }

    void Shop::updateQuantityShoppingCart(std::string id, std::string name, int quantity)
    {
        for (int i = 0; i < _clients.size(); i++)
        {
            if (_clients[i].getId() == id)
            {
                _clients[i].removeFromShoppingCart(name);
                for (int j = 0; j < _products.size(); j++)
                {
                    if (_products[j].getName() == name)
                    {
                        _products[j].setQuantity(_products[j].getQuantity() + quantity);
                    }
                }
            }
        }
    }
    void Shop::upadateQuantityInShoppingCart(std::string id, std::string name, int quantity)
    {
        for (int i = 0; i < _clients.size(); i++)
        {
            if (_clients[i].getId() == id)
            {
                for (int j = 0; j < _products.size(); j++)
                {
                    if (_products[j].getName() == name)
                    {
                        _products[j].setQuantity(_products[j].getQuantity() + quantity);
                    }
                }
            }
        }
    }
    void Shop::valideOrder(std::string id)
    {
        for (int i = 0; i < _clients.size(); i++)
        {
            if (_clients[i].getId() == id)
            {
                _orders.push_back(order::Order(_clients[i], _clients[i].getShoppingCart(), false));
                _clients[i].clearShoppingCart();
            }
        }
    }
    void Shop::updateOrder(std::string id, bool orderstatus)
    {
        for (int i = 0; i < _orders.size(); i++)
        {
            if (_orders[i].getClient().getId() == id)
            {
                _orders[i].setOrderStatus(orderstatus);
            }
        }
    }
    void Shop::showOrders()
    {
        for (int i = 0; i < _orders.size(); i++)
        {
            std::cout << _orders[i] << std::endl;
        }
    }
    void Shop::showOrder(std::string id)
    {
        for (int i = 0; i < _orders.size(); i++)
        {
            if (_orders[i].getClient().getId() == id)
            {
                std::cout << _orders[i] << std::endl;
            }
        }
    }
}