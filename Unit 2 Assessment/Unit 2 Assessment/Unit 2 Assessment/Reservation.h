#pragma once
#include <string>

class Reservation
{
public:
	Reservation();
	~Reservation();

	void bookReservation(std::string, int, int);
	std::string displayReservation();

private:
	std::string guestName;
	int roomNumber;
	int reservationDate;

};