#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <vector>
#include "product.h"
#include "client.h"


namespace order 
{
    class Order
    {
    public:
        Order(const client::Client& client, const std::vector<product::Product>& orderedproducts, bool orderstatus);
        client::Client getClient();
        std::vector<product::Product> getOrderedProducts();
        bool getOrderStatus();
        bool setOrderStatus(bool orderstatus);
        
    private:
        client::Client _client;
        std::vector<product::Product> _orderedproducts;
        bool _orderstatus;
        
    };

    std::ostream& operator<<(std::ostream& os,  Order& order);
} 

#endif // ORDER_H