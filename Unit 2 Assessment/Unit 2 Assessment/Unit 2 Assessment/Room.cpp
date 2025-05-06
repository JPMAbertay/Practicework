#include "Room.h"

Room::Room()
{
	//roomNumber = 100;
	//roomType = "Single";
	//availibility = true;
}

Room::~Room()
{
}

void Room::setRoom(int room_, std::string type_, bool availibility_)
{
	roomNumber = room_;
	roomType = type_;
	availibility = availibility_;

}

std::string Room::displayRoom()
{		
	std::string availibilityDisplay;
	if (availibility)
		availibilityDisplay = "True";
	else availibilityDisplay = "False";
	std::string display = "Room Number = " + std::to_string(roomNumber) + " Room type = " + roomType + " Availablility = " + availibilityDisplay + "\n";
	return display;

}


