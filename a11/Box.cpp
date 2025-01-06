/*
CH-230-A
a11_p1.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

//method for finding volume
double Box::volume() {
    double volume;
    volume = height * width * depth;
    return volume;
}

//setter for height:
void Box::setHeight(double newHeight) {
    height = newHeight;
}

//setter for width:
void Box::setWidth(double newWidth) {
    width = newWidth;
}

//setter for depth:
void Box::setDepth(double newDepth) {
    depth = newDepth;
}

//getter for height:
double Box::getHeight() {
    return height;
}

//getter for width:
double Box::getWidth() {
    return width;
}

//getter for depth:
double Box::getDepth() {
    return depth;
}

//default constructor-setting values as 0 by choice
Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}

//constructor that sets data members
Box::Box(double Height, double Width, double Depth) {;
    height = Height;
    width = Width;
    depth = Depth;
}

//copy constructor
Box::Box(const Box &b) {
    height = b.height;
    width = b.width;
    depth = b.depth;
}

//destructor
Box::~Box() {
    std::cout << "Using destructor now!\n";
}
