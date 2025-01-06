/*
CH-230-A
a12_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h" //also including the new header file for squares
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
    /* (1) We are creating an array of object (of type Area) pointers.
    The number of objects is the num_obj variable (equal to 6). */
	int index = 0;								// (2)
    /* (2) setting an integer named index as 0, in order to use it when
    we access the list objects later. We want to start from the first
    one to print their properties.*/
	double sum_area = 0.0;						// (3)
    /* (3) Setting the sum of all the areas as zero, so that it's
    initialized as a variable. We need to do this before using it
    in a loop later and adding all the area values to it.*/
    double sum_perim = 0.0; //adding a sum variable for perimeters
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
    /* (4) We are using the parametric constructor of each class to
    create instances of each class. 
    1- new ring object named blue_ring. "BLUE" will be its color
    property (inherited from area); 5 will be the radius (inherited
    from circle); 2 will be the innerradius property of this ring.
    2- new circle object named yellow_circle with "YELLOW" color and
    radius of 7. 
    3- new rectangle object named green_rectangle with "GREEN" as its
    color, 5 as its length and 7 as its width.
    4- new circle object named yellow_circle with "RED" as its color
    and 8 as its radius.
    5- new rectangle object named black_rectangle with "BLACK" as its
    color, 10 as its length and 20 as its width.
    6- new ring object with "VIOLET" color, 100 as its radius and 5
    as its inner radius.*/
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

    //creating square object
    Square white_square("WHITE", 12);

	list[0] = &blue_ring;						// (5)
    /* (5) Initializing each list member (6 total) by assigning the
    addresses (using &) of all the objects we created above.*/
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    //adding square object in list:
    list[6] = &white_square;

	while (index < num_obj) {					// (7)
    /* (7) creating a loop that runs as many times as there are list
    members; applying the getColor method to each member.*/
		(list[index])->getColor();
    //getting perimeter for each obj-the index is already incremented
        double perim = list[index]->calcPerim();		
		double area = list[index++]->calcArea();// (8)
    /* (8) the area variable will change with each iteration, it'll
    temporarily hold the area of each object until its added into the
    sum_area.*/
        sum_perim += perim;
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
    /* (9) Printing out the final sum of areas on the screen.*/
    cout << "The total perimeter is " << sum_perim << " units" << endl;

	return 0;
}

/* DIAGRAM THAT SHOWS HOW CLASSES RELATE TO EACH-OTHER
                   | AREA |
                     /  \
                    /    \
                   /      \
            | CIRCLE |  | RECTANGLE |
                 |            |
                 |            |
             | RING |      |SQUARE|
 */