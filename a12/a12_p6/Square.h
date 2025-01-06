/*
CH-230-A
a12_p6.h
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    Square();
    ~Square();
    Square(const char*, double);

    double calcArea() const;
    double calcPerim() const;
};

#endif