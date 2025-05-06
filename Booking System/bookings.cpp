#include "bookings.h"

Bookings::Bookings() {}
	// Constructor}
Bookings::~Bookings() {}
	// destructor


/*void Bookings::setRoomType(std::string type_)
{
	roomType = type_;
}

void Bookings::setRoomNumber(int roomNum_)
{
	roomNumber = roomNum_;
}

void Bookings::setDate(int date_)
{
	date = date_;
} */

void Bookings::createBooking(std::string type_, int roomNum_, int date_) {
	for (int i = 0; i < BOOKINGSIZE; i++) { // create as many bookings as booking size (constant value)
		auto booking = new Bookings();
		booking->setRoomType(type_);
		booking->setRoomNumber(roomNum_);
		booking->setDate(date_);// set the varaibles for the new object
		bookings.push_back(booking); // then push it back into the vector

	}
}

std::string Bookings::listBookings() {
	for (int i = 0; i < bookings.size(); i++) {
		std::string type_ = bookings[i]->roomType; 
		std::string number_ = std::to_string(bookings[i]->roomNumber);
		std::string date_ = std::to_string(bookings[i]->date); // get the variables for all the objects in the array and format them to strings
		std::string concat = "\nRoom Type : " + type_ + "\nRoom Number : " + number_ + "\nBooking Date : " + date_; // Turn all the date into a print formatting
		return concat;
	}
}