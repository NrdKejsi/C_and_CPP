/*
CH-230-A
a12_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "Square.h"
#include <iostream>

//parametric constructor implementation
Square::Square(const char* n, double Side) 
                : Rectangle(n, Side, Side) {
    side = Side;
}

Square::~Square() {
    //empty destructor
}

//implementing method for computing area for square class
double Square::calcArea() const {
    std::cout << "calcArea of Square...";
    return (side * side);
}

//implementing method for computing perimeter for squares
double Square::calcPerim() const {
    std::cout << "calcPerimeter of Square...";
    return (4 * side);
}