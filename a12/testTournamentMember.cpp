/*
CH-230-A
a12_p2.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

int main() {
    //creating instances using all three constructor types
    TournamentMember member1((char*)"John", (char*)"Smith",
                    (char*)"1975-11-29","Coach", "Male");
    TournamentMember member2((char*)"Taylor", (char*)"Mackay",
                (char*)"1998-10-07", "Referee", "Female");
    TournamentMember member3(member1);
    TournamentMember member4((char*)"Jasir", (char*)"Asani", 
                    (char*)"1995-05-19", "Player", "Male");
    TournamentMember member5;
    //giving values to inctance created by empty constructor
    member5.setBdate("1997-07-14");
    member5.setFName("Armando");
    member5.setLName("Broja");
    member5.setGender("Male");
    member5.setRole("Player");
    //this will change every member's location to London
    member5.changeLoc("London");

    //now we can use the print function to print each member's data
    std::cout << "Loading data for members...\n";
    member1.print();
    member2.print();
    member3.print();
    member4.print();
    member5.print();

    return 0;
}