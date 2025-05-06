#include <iostream>
#include "bookings.h"

int main(){

	Bookings bookings;

	std::string type_;
	int date_;
	int number_;

	for (int i = 0; i < 5; i++) {
		std::cout << "\nPlease enter the room type: ";
		std::cin >> type_;

		std::cout << "\nPlease enter the booking date: ";
		std::cin >> date_;

		std::cout << "\nPlease enter the room number: ";
		std::cin >> number_;

		bookings.createBooking(type_,date_,number_);
		
	}

	for (int i = 0; i < bookings.getBookingList().size(); i++) {
		bookings.listBookings();
	}



}