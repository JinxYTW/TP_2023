#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>
#include "date.h"
#include "room.h"
#include "hotel.h"
#include "client.h"
#include <vector>

namespace reservation
{
    class Reservation
    {
        public:

        Reservation(std::string hotelId, std::string clientId, int roomNumber, int price, date::Date startDate, int numberOfNights);
        date::Date startDate();
        int numberOfNights();
        std::string hotelId();
        std::string clientId();
        int roomNumber();

        Reservation updateReservation(std::string hotelId, std::string clientId, int roomNumber, int price, date::Date startDate, int numberOfNights);
        int reservationCost();
        std::vector<room::Room> availableRooms(std::string hotelId, std::string startDate, int numberOfNights);

        private:
        int _price;
        date::Date _startDate;
        int _numberOfNights;
        std::string _hotelId;
        std::string _clientId;
        int _roomNumber;
    };

    bool reservationAvailability(std::string hotelId, int roomNumber, std::string startDate, int numberOfNights);
}   // namespace reservation    











#endif // RESERVATION_H