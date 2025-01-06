/*
CH-230-A
a11_p5.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

int main(int argc, char** argv) {
    //part of original code:
    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);

    //creating instance of circle:
    Circle c2("My Circle", 3, 5, 8);
    //creating instance of rectangle:
    Rectangle rg("My Rectangle", 2, 1, 4, 3);
    //creating instance of square:
    Square sq("My Square", 2, 3, 4);

    //computing the perimeter of circle and printing it
    double cP = c2.perimeter();
    std::cout << "My circle's perimeter is: " << cP << "\n";

    //computing the perimeter of rectangle and printing it
    double rP = rg.perimeter();
    std::cout << "My rectangle's perimeter is: " << rP << "\n";

    //computing the perimeter of square and printing it
    double sP = sq.perimeter();
    std::cout << "My square's perimeter is: " << sP << "\n";

    //computing the area of circle and printing it
    double cA = c2.area();
    std::cout << "My circle's area is: " << cA << "\n";

    //computing the area of rectangle and printing it
    double rA = rg.area();
    std::cout << "My rectangle's area is: " << rA << "\n";

    //computing the area of square and printing it
    double sA = sq.perimeter();
    std::cout << "My square's area is: " << sA << "\n";

    //part of original code
    r.printName();
    c.printName();

}