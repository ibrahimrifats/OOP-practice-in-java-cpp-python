#include "MountainBike.h"

int main()
{
    MountainBike mountainbike;

    mountainbike.setCadence(3);
    mountainbike.setGear(4);
    mountainbike.setHeight(1);
    mountainbike.setSpeed(30);
    mountainbike.printLine();


    return 0;
}