#include <iostream>
#include "Room.h"
#include "Reservation.h">

using namespace std;

int main() {
    const int SIZE = 15;
    Room room;

    cout << "Rooms available in the hotel:" << endl;

    for (int i = 0; i <= SIZE; i++) {
        room.setRoom(100 + i, "Single", true);
        cout << room.displayRoom();

    }

    // Displaying rooms

    // Booking a reservation
    Reservation reservation;
    string guestName;
    int roomNumber, reservationDate;
    const int RESSIZE = 5;
    std::string contin;
    bool loop = true;

    if (loop) {
        for (int i = 0; i <= RESSIZE; i++) {
            cout << endl <<"Enter guest's name: ";
            cin >> guestName;
            cout << "Enter room number: ";
            cin >> roomNumber;
            cout << "Enter reservation date (YYMMDD): ";
            cin >> reservationDate;
            cout << "Type 'stop' to stop. Press Enter to continue ";
            cin >> contin;
            if (contin == "stop") {
                loop = false;
            }
            else {
                reservation.bookReservation(guestName, roomNumber, reservationDate);
                cout << "Reservation booked:" << endl;
                // Displaying the reservation
                reservation.displayReservation();
            }

        }

    }

    return 0;
}
