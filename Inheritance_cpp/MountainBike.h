#ifndef MOUNTAINBIKE_H
#define MOUNTAINBIKE_H

#include <iostream>
#include "Bicycle.h"
using namespace std;

class MountainBike : public Bicycle {
public:
    int seatHeight;

    // Constructor
    MountainBike() : Bicycle(), seatHeight(0) {}

    // Setter for seatHeight
    void setHeight(int newValue) {
        seatHeight = newValue;
    }

    // Overridden printLine method
    void printLine()  {
        cout << "Seat Height: " << seatHeight
             << ", Gear: " << gear
             << ", Cadence: " << cadence
             << ", Speed: " << speed << endl;
    }
};

#endif // MOUNTAINBIKE_H
