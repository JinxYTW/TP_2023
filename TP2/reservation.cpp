#include "reservation.h"
#include <iostream>
#include <string>
#include <vector>
#include "date.h"

namespace reservation{
    Reservation::Reservation(std::string hotelId, std::string clientId, int roomNumber, int price, date::Date startDate, int numberOfNights){
        _hotelId = hotelId;
        _clientId = clientId;
        _roomNumber = roomNumber;
        _price = price;
        _startDate = date::Date(startDate);
        _numberOfNights = numberOfNights;
    }
    date::Date Reservation::startDate(){
        return _startDate;
    }
    int Reservation::numberOfNights(){
        return _numberOfNights;
    }
    std::string Reservation::hotelId(){
        return _hotelId;
    }
    std::string Reservation::clientId(){
        return _clientId;
    }
    int Reservation::roomNumber(){
        return _roomNumber;
    }

    Reservation Reservation::updateReservation(std::string hotelId, std::string clientId, int roomNumber, int price, date::Date startDate, int numberOfNights)
    {
        return Reservation(hotelId, clientId, roomNumber, price, startDate, numberOfNights);
    }

    int Reservation::reservationCost()
    {
        return _price * _numberOfNights;
    }

    

    bool reservationAvailability(std::string hotelId, int roomNumber, std::string startDate, int numberOfNights)
    {

    }

} // namespace reservation
    