/*
CH-230-A
a10_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <iostream>
#include "City.h"

//setter for city name
void City::setName(std::string newName) {
    name = newName;
}

//setter for city mayor
void City::setMayor(std::string newMayor) {
    mayor = newMayor;
}

//setter for city inhabitants
void City::setInhabitants(float newInhabitants) {
    inhabitants = newInhabitants;
}

//setter for city area
void City::setArea(double newArea) {
    area = newArea;
}

//getter for city name
std::string City::getName() {
    return name;
}

//getter for city mayor
std::string City::getMayor() {
    return mayor;
}

//getter for city inhabitants
int City::getInhabitants() {
    return inhabitants;
}

//getter for city area
double City::getArea() {
    return area;
}
