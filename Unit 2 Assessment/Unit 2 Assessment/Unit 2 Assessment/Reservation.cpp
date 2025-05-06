#include "Reservation.h"

Reservation::Reservation()
{
}

Reservation::~Reservation()
{
}

void Reservation::bookReservation(std::string name_, int number_, int date_)
{
	guestName = name_;
	roomNumber = number_;
	reservationDate = date_;
}

std::string Reservation::displayReservation()
{
	std::string display = "Name = " + guestName + "\n Room Number = " + std::to_string(roomNumber) + "\n Reservation Date = " + std::to_string(reservationDate);
	return display;
}
