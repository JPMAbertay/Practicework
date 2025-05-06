#pragma once
#include <string>
#include <vector>

class Room
{
public:
	Room();
	~Room();

	void setRoom(int room_, std::string type_, bool availibility_);// Setter
	std::string displayRoom(); // Getter
	bool getAvailibilty();


private:
	//Room* room;

	//room number, type, availability
	int roomNumber;
	std::string roomType;
	bool availibility;


};

