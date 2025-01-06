/*
CH-230-A
a12_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}

//adding implementation of perimeter method for rectangle class
double Rectangle::calcPerim() const {
    // printing message accordingly
    std::cout << "calcPerimeter of Rectangle...";

    return 2 * (length * width);
}
