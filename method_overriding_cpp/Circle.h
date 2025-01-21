#ifndef Circle_H
#define Circle_H

#include <string>

class Circle{
public:
double radius;
std::string color;

Circle(): radius(9.0), color("RED") {}

virtual double getArea() const{
    return radius * radius * 3.1416;
}

virtual ~Circle() {} // for proper cleanup


};


#endif