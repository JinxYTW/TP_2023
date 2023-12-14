#include "reservation.h"
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
#include "room.h"
#include "hotel.h"
#include "client.h"
#include <map>


namespace reservation{
    Reservation::Reservation(std::string hotelId, std::string clientId, int roomNumber, int price, date::Date startDate, int numberOfNights){
    if (!isReservationPossible(hotelId, roomNumber, startDate, numberOfNights)) {
        throw std::runtime_error("Reservation is not possible for the given dates.");
    }
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

    

   std::map<std::pair<std::string, int>, std::vector<Reservation>> existingReservations;

bool Reservation::isReservationPossible(std::string hotelId, int roomNumber, date::Date startDate, int numberOfNights) {
    std::pair<std::string, int> key = {hotelId, roomNumber};
    if (existingReservations.find(key) != existingReservations.end()) {
        for ( Reservation& existingReservation : existingReservations[key]) {
            if (existingReservation.startDate() < startDate + numberOfNights && existingReservation.startDate() + existingReservation.numberOfNights() > startDate) {
                return false;
            }
        }
    }
    return true;
    }

    void reservation::Reservation::addReservation(Reservation newReservation) {
        std::pair<std::string, int> key = {newReservation.hotelId(), newReservation.roomNumber()};
        reservation::existingReservations[key].push_back(newReservation);
    }

    std::vector<reservation::Reservation> reservation::Reservation::getReservationsForRoom(std::string hotelId, int roomNumber) {
        std::pair<std::string, int> key = {hotelId, roomNumber};
        if (reservation::existingReservations.find(key) != reservation::existingReservations.end()) {
            return reservation::existingReservations[key];
        } else {
            throw std::runtime_error("No reservations found for this room.");
        }
    }

} // namespace reservation
    