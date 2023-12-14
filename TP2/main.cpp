#include "date.h"
#include <iostream>
#include <string>
#include <vector>
#include "room.h"
#include "hotel.h"
#include "client.h"
#include <map>
#include "reservation.h"

int main(){
    // Création de quatre clients
    client::Client client1("1", "Client1", "Phone1");
    client::Client client2("2", "Client2", "Phone2");
    client::Client client3("3", "Client3", "Phone3");
    client::Client client4("4", "Client4", "Phone4");

    // Création de deux hôtels
    hotel::Hotel hotel1("1", "Hotel1", "City1", {room::Room(1, 100, "Single", true), room::Room(2, 200, "Double", true)});
    hotel::Hotel hotel2("2", "Hotel2", "City2", {room::Room(1, 150, "Single", true), room::Room(2, 250, "Double", true)});

    // Création de quelques réservations
    reservation::Reservation reservation1("1", "1", 1, 100, date::Date(1, 1, 2020), 1);
    reservation::Reservation reservation2("1", "2", 2, 200, date::Date(1, 2, 2020), 2);
    reservation::Reservation reservation3("2", "3", 1, 150, date::Date(1, 3, 2020), 1);
    reservation::Reservation reservation4("2", "4", 2, 250, date::Date(1, 4, 2020), 2);

    // Ajout des réservations aux réservations existantes
    reservation::Reservation::addReservation(reservation1);
    reservation::Reservation::addReservation(reservation2);
    reservation::Reservation::addReservation(reservation3);
    reservation::Reservation::addReservation(reservation4);

    return 0;
}