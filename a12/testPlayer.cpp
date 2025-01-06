/*
CH-230-A
a12_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

int main() {
    //creating first player with default constructor
    Player p1;
    //setting all his properties
    p1.setNumber(11);
    p1.setPos("Midfield");
    p1.setFoot("left-footed");
    p1.setFName((char*) "Harry");
    p1.setLName((char*) "White");
    p1.setBdate((char*) "1997-02-21");
    p1.setGender("Male");
    p1.setRole("Player");

    //creating second player with parametric constructor
    Player p2(7, "Attack", 17, "right-footed");
    //only setting his TournamentMember properties
    p2.setFName((char*) "Jasir");
    p2.setLName((char*) "Asani");
    p2.setBdate((char*) "1995-05-19");
    p2.setGender("Male");
    p2.setRole("Player");

    //creating third player with parametric constructor
    Player p3(10, "Forward", 20, "left-footed");
    //also only setting his TournamentMember properties
    p3.setFName((char*) "Armando");
    p3.setLName((char*) "Broja");
    p3.setBdate((char*) "1997-07-14");
    p3.setGender("Male");
    p3.setRole("Player");
    p3.incrementGoals(); //testing this method's functionality

    //enough to change all player's location to Hamburg
    p1.changeLoc("Hamburg");

    //printing all players' data
    std::cout << "Loading data for members...";
    p1.printData();
    p1.print();
    p2.printData();
    p2.print();
    p3.printData();
    p3.print();

    return 0;
}