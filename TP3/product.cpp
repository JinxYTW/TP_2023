#include "product.h"
#include <string>
#include <iostream>

namespace product
{

    Product::Product(std::string name, std::string desc, int quantity, double price)
    {
        _name = name;
        _description = desc;
        _quantity = quantity;
        _price = price;

    }

    std::string Product::getName()
    {
        return _name;
    }
    std::string Product::getDescription()
    {
        return _description;
    }
    double Product::getPrice()
    {
        return _price;
    }
    int Product::getQuantity()
    {
        return _quantity;
    }
    void Product::setQuantity(int quantity)
    {
        _quantity = quantity;
    }

    std::ostream &operator<<(std::ostream &os,  Product& product)
    {
        os << "Name: " << product.getName() << std::endl;
        os << "Description: " << product.getDescription() << std::endl;
        os << "Price: " << product.getPrice() << std::endl;
        os << "Quantity: " << product.getQuantity() << std::endl;
        return os;
    }
}
