
/*
CH-230-A
a11_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

int main() {
    double *comp1 = new double[2];
    comp1[0] = 5;
    comp1[1] = 8;
    //using default constructor for the first vector
    Vector v1;
    v1.setSize(2);
    v1.setComp(comp1);
    
    //using parametric constructor for 2nd vector
    double *comp2 = new double[3];
    comp2[0] = 1;
    comp2[1] = 2;
    comp2[2] = 3;
    Vector v2(3, comp2);

    //using copy constructor for 3rd vector
    Vector v3(v2);

    //using parametric constructor for 4th vector
    double *comp4 = new double[3];
    comp4[0] = 2;
    comp4[1] = 4;
    comp4[2] = 5;
    Vector v4(3, comp4);

    //using print function to print out all the vector data
    std::cout << "We created the 1st vector!\n";
    v1.print();

    std::cout << "We created the 2nd vector!\n";
    v2.print();

    std::cout << "We created the 3rd vector!\n";
    v3.print();

    std::cout << "We created the 4th vector!\n";
    v4.print();

    //printing out vector comutation according to instructions
    std::cout << "This is the 2nd vectors norm:\n";
    std::cout << v2.norm() << "\n";

    std::cout << "The scalar product of the 2nd & 4th vectors: ";
    std::cout << v2.scalar(v4) << "\n";

    std::cout << "We computed the sum vector the 2nd & 4th vectors.\n";
    Vector sum = v2.add(v4);
    (v2.add(v4)).print();

    
    std::cout << "We found the difference between the same vectors.\n";
    //Vector difference;
    //difference = v2.diff(v4);
    (v2.diff(v4)).print();
    
    return 0;
}