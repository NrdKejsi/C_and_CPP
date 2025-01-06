/*
CH-230-A
a12_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

string TournamentMember::location = "Berlin";

//default constructor implementation
TournamentMember::TournamentMember() {
    cout << "Using default constructor now!\n";
}

//parametric constructor implementation
TournamentMember::TournamentMember(char* FN, char* LN, char* BD,
                    std::string R, std::string G) {
    strcpy(FirstName, FN);
    strcpy(LastName, LN);
    strcpy(BirthDate, BD);
    role = R;
    gender = G;
    //printing message accordingly
    cout << "Using parametric constructor now!\n";
}

//copy constructor implementation
TournamentMember::TournamentMember(const TournamentMember& TM) {
    strcpy(FirstName, TM.FirstName);
    strcpy(LastName, TM.LastName);
    strcpy(BirthDate, TM.BirthDate);
    role = TM.role;
    gender = TM.gender;
    //printing message accordingly
    cout << "Using copy constructor now!\n";
}

// destructor implementation
TournamentMember::~TournamentMember() {
    //printing message accordingly
    cout << "Using destructor now!\n";
} 

//printing method implementation
void TournamentMember::printData() {
    cout << "Participant's data is as follows:\n";
    cout << "First Name: " << FirstName << "\t";
    cout << "Last Name: " << LastName << "\t";
    cout << "Birth Date: " << BirthDate << "\t";
    cout << "Location: " << location << "\t";
    cout << "Role in Tournament: " << role << "\t";
    cout << "Gender: " << gender << endl;
}

//method to change location
void TournamentMember::changeLoc(string L) {
    location = L;
}

//default constructor implementation 
Player::Player() {
    goals = 3; //random value for goals
    cout << "Creating player using default constructor!\n";
}

//parametric constructor implementation
Player::Player(int Num, string Pos, int Goals, string Foot) {
    cout << "Creating player using parametric constructor!\n";
    number = Num;
    position = Pos;
    goals = Goals;
    foot = Foot;
}

//copy constructor implementation
Player::Player(const Player& P) {
    cout << "Creating player using copy constructor!\n";
    number = P.number;
    position = P.position;
    goals = P.goals;
    foot = P.foot;
}

//destructor implementation
Player::~Player() {
    cout << "Using player destructor now!\n";
}

//printing method implementation
void Player::print() const {
    cout << "Player's data is as follows:\n";
    cout << "Number -> " << number << endl;
    cout << "Position -> " << position << endl;
    cout << "Goals -> " << goals << endl;
    cout << "Foot -> " << foot << endl;
}

//method for incrementing goals implementation
void Player::incrementGoals() {
    goals ++;
}