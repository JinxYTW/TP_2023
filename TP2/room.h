#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

namespace room
{
    class Room
    {
        public:
        Room(int number,int price, std::string type, bool available);
        int number();
        int price();
        std::string type();
        bool isAvailable();
        void setAvailable(bool available);

        private:
        int _number;
        int _price;
        std::string _type;
        bool _available;
    };
}   // namespace room







#endif // ROOM_H