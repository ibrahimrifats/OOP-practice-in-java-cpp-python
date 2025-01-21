#ifndef Bicycle_H
#define Bicycle_H

#include <iostream>
using namespace std;

class Bicycle{
    public:

    int cadence;
    int gear;
    int speed;
    // constructor
    Bicycle(): cadence(0), gear(0), speed(0) {}

    void setCadence(int newValue){
        cadence = newValue;
    }
    void setGear(int newValue){
        gear = newValue;
    }
    void setSpeed(int newValue){
        speed = newValue;
    }


};

#endif