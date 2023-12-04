#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <string>
#include <vector>
#include "room.h"


namespace hotel
{
    class Hotel
    {
        public:

        Hotel(std::string hotelId, std::string name, std::string city, std::vector<room::Room> rooms);

        std::string name();
        std::string city();
        std::vector<room::Room> rooms();

        private:
        std::string _hotelId;
        std::string _name;
        std::string _city;
        std::vector<room::Room> _rooms;
    };
}   // namespace hotel











#endif // HOTEL_H