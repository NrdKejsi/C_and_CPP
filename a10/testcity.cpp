/*
CH-230-A
a10_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main() {
    //creating 3 objects as instructed
    City Bremen;
    City Paris;
    City London;

    //three of the cities' names
    string name1, name2, name3;
    name1 = "Bremen";
    name2 = "Paris";
    name3 = "London";
    //three of the cities' mayors
    string mayor1, mayor2, mayor3;
    mayor1 = "Andreas Bovenschulte";
    mayor2 = "Anne Hidalgo";
    mayor3 = "Sadiq Khan";
    //three of the cites' inhabitants
    float inhab1, inhab2, inhab3;
    inhab1 = 678909;
    inhab2 = 2456997;
    inhab3 = 5978645;
    //three of the cities' areas
    double area1, area2, area3;
    area1 = 326.7;
    area2 = 105;
    area3 = 1572;

    cout << "The first city's information:" << endl;

    //using setters & getters to set each property and print it
    cout << "Name: ";
    Bremen.setName(name1);
    cout << Bremen.getName() << endl;

    cout << "Mayor: ";
    Bremen.setMayor(mayor1);
    cout << Bremen.getMayor() << endl;

    cout << "Area in km square: ";
    Bremen.setArea(area1);
    cout << Bremen.getArea() << endl;

    cout << "Inhabitants: ";
    Bremen.setInhabitants(inhab1);
    //two endlines for nicer aesthetic
    cout << Bremen.getInhabitants() << endl << endl;


    cout << "Second city's information" << endl;

    cout << "Name: ";
    Paris.setName(name2);
    cout << Paris.getName() << endl;

    cout << "Mayor: ";
    Paris.setMayor(mayor2);
    cout << Paris.getMayor() << endl;

    cout << "Area: ";
    Paris.setArea(area2);
    cout << Paris.getArea() << endl;

    cout << "Inhabitants: ";
    Paris.setInhabitants(inhab2);
    //two endlines for nicer aesthetic
    cout << Paris.getInhabitants() << endl << endl;


    cout << "Third city's information" << endl;

    cout << "Name: ";
    London.setName(name3);
    cout << London.getName() << endl;

    cout << "Mayor: ";
    London.setMayor(mayor3);
    cout << London.getMayor() << endl;

    cout << "Area: ";
    London.setArea(area3);
    cout << London.getArea() << endl;
    
    cout << "Inhabitants: ";
    London.setInhabitants(inhab3);
    //two endlines for nicer aesthetic
    cout << London.getInhabitants() << endl << endl;

    return 0;
}
