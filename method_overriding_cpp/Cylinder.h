#ifndef Cylinder_H
#define Cylinder_H

#include <cmath>
#include "Circle.h"

class Cylinder : public Circle{
public:

    double height;
    Cylinder(): Circle(), height(6.0){}

    double getArea()const override{
        double area = 2 * M_PI * radius * height + 2 * Circle::getArea();
        return area;
    }



};




#endif