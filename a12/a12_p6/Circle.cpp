/*
CH-230-A
a12_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

//adding implementation of perimeter method for circle class
double Circle::calcPerim() const {
    // printing message accordingly
    std::cout << "calcPerimeter of Circle...";
    return 2 * M_PI * radius;
}