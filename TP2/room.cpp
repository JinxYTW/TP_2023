#include "room.h"

namespace room
{
    Room::Room(int number,int price, std::string type, bool available)
    {
        _number = number;
        _price = price;
        _type = type;
        _available = available;
    }

    int Room::number()
    {
        return _number;
    }

    int Room::price()
    {
        return _price;
    }

    std::string Room::type()
    {
        return _type;
    }

    bool Room::isAvailable()
    {
        return _available;
    }

    void Room::setAvailable(bool available)
    {
        _available = available;
    }
}   // namespace room
