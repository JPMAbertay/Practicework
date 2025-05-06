#pragma once
#include <iostream>
#include <vector>
#include <string>

class Bookings
{

public:
	auto getBookingList() { return bookings; }

	void setRoomType(std::string type_);
	void setDate(int date_);
	void createBooking(std::string type_, int roomNum_, int date_);
	std::string listBookings();
	void setRoomNumber(int roomNum_);


private:

	std::string roomType;
	int roomNumber = 0;
	int date = 0;
	std::vector<Bookings*> bookings;

	int BOOKINGSIZE = 5;

};

