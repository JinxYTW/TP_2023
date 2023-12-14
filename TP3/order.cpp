#include "order.h"

namespace order
{

    Order::Order(const client::Client& client, const std::vector<product::Product>& orderedproducts, bool orderstatus) : _client(client), _orderedproducts(orderedproducts), _orderstatus(orderstatus) {}

    client::Client Order::getClient()
    {
        return _client;
    }

    std::vector<product::Product> Order::getOrderedProducts()
    {
        return _orderedproducts;
    }

    bool Order::getOrderStatus()
    {
        return _orderstatus;
    }

    bool Order::setOrderStatus(bool orderstatus)
    {
        return _orderstatus = orderstatus;
    }

    std::ostream &operator<<(std::ostream &os,  Order &order)
    {
        os << "Client: " << order.getClient() << std::endl;
        os << "Ordered products: " << std::endl;
        for (int i = 0; i < order.getOrderedProducts().size(); i++)
        {
            os << order.getOrderedProducts()[i] << std::endl;
        }
        os << "Order status: " << order.getOrderStatus() << std::endl;
        return os;
    }

}
