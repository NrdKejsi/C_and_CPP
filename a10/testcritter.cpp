/*
CH-230-A
a10_p4.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	//declaring two new variables for the new properties
	int skill;
	double weight;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "Skill: ";
	//Setting the new skill variable
	cin >> skill;
	c.setSkill(skill);
	cout << "Weight: ";
	//Setting new weight variable
	cin >> weight;
	c.setWeight(weight);

	cout << "You have created:" << endl;
	//The print funct has been modified to print the new properties
	c.print();
        return 0;
}