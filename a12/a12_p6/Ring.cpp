/*
CH-230-A
a12_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

//adding implementation of perimeter method for ring class
double Ring::calcPerim() const {
    // printing message accordingly
    std::cout << "calcPerimeter of Ring...";
    
    return (Circle::calcPerim() + (2 * M_PI * innerradius));
}