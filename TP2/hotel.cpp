#include "hotel.h"

namespace hotel
{
    Hotel::Hotel(std::string hotelId, std::string name, std::string city, std::vector<room::Room> rooms):_hotelId(hotelId),_name(name),_city(city),_rooms(rooms)
    {
        
    }

    std::string Hotel::name()
    {
        return _name;
    }

    std::string Hotel::city()
    {
        return _city;
    }

    std::vector<room::Room> Hotel::rooms()
    {
        return _rooms;
    }

   
}   // namespace hotel