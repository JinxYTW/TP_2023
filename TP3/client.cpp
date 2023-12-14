#include "client.h"

namespace client
{
    Client::Client(std::string id, std::string name, std::string surname, std::vector<product::Product> shoppingCart)
    {
        _name = name;
        _surname = surname;
        _id = id;
        _shoppingCart = shoppingCart;
    }
    std::string Client::getName()
    {
        return _name;
    }
    std::string Client::getSurname()
    {
        return _surname;
    }
    std::string Client::getId()
    {
        return _id;
    }
    std::vector<product::Product> Client::getShoppingCart()
    {
        return _shoppingCart;
    }

    void Client::addToShoppingCart(product::Product product)
    {
        _shoppingCart.push_back(product);
    }
    void Client::removeFromShoppingCart(std::string name)
    {
        for (int i = 0; i < _shoppingCart.size(); i++)
        {
            if (_shoppingCart[i].getName() == name)
            {
                _shoppingCart.erase(_shoppingCart.begin() + i);
            }
        }
    }
    
    void Client::clearShoppingCart()
    {
        _shoppingCart.clear();
    }
    std::ostream &operator<<(std::ostream &os,  Client &client)
    {
        os << "Name: " << client.getName() << std::endl;
        os << "Surname: " << client.getSurname() << std::endl;
        os << "ID: " << client.getId() << std::endl;
        os << "Shopping cart: " << std::endl;
        for (int i = 0; i < client.getShoppingCart().size(); i++)
        {
            os << client.getShoppingCart()[i] << std::endl;
        }
        return os;
    }
    void Client::showShoppingCart()
    {
        std::cout << *this << std::endl;
    }
}
