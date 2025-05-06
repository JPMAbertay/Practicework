#include "bookings.h"

Bookings::Bookings() {

}

void Bookings::setRoomType(std::string type_)
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
}

void Bookings::createBooking(std::string type_, int roomNum_, int date_) {
	for (int i = 0; i < BOOKINGSIZE; i++) {
		auto booking = new Bookings();
		booking->setRoomType(type_);
		booking->setRoomNumber(roomNum_);
		booking->setDate(date_);
		bookings.push_back(booking);

	}
}

std::string Bookings::listBookings() {
	for (int i = 0; i < bookings.size(); i++) {
		std::string type_ = bookings[i]->roomType; 
		std::string number_ = std::to_string(bookings[i]->roomNumber);
		std::string date_ = std::to_string(bookings[i]->date);
		std::string concat = "\nRoom Type : " + type_ + "\nRoom Number : " + number_ + "\nBooking Date : " + date_;
		return concat;
	}
}