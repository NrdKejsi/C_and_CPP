/*
CH-230-A
a10_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//the convert to double method returns a double type
double Critter::convToDouble(int hunger) {
	//converting to double (range 0.0-1.0)
	double newHunger = (double) hunger / 10;
	return newHunger;
}

//the convert to int method returns an integer type
int Critter::convBack(double hunger) {
	//converting back
	int newHunger = hunger * 10;
	return newHunger;
}

//first constructor definition
Critter::Critter(){
	//printing simple informational message
	cout << "The first constructor has been called!\n";
	//setting values as instructed in the problem
	name = "default_critter";
	height = 5;
	hunger = Critter::convToDouble(0);
	boredom = 0;
    //assigning a value to thirst
    thirst = hunger;
}

//second constructor definition
Critter::Critter(string Name){
	//printing simple informational message
	cout << "The second constructor has been called!\n";
	//passing string Name to the name property
	name = Name;
	//setting values as instructed in the problem
	height = 5;
	hunger = Critter::convToDouble(0);
    //assigning a value to thirst
    thirst = hunger;
	boredom = 0;
}

//third constructor definition
Critter::Critter(string Name, int Hunger, int Boredom, double Height){
	//printing simple informational message
	cout << "The third constructor has been called!\n";
	//passing each property the assigned parameter
	name = Name;
	boredom = Boredom;
    //assigning a value to thirst (before converting to double by /10)
    thirst = (double) Hunger;
	hunger = Critter::convToDouble(Hunger);
	height = Height;
}

//fourth constructor definition
Critter::Critter(string Name, double Thirst, int Hunger, int Boredom,
              double Height) {
    //printing simple informational message
    cout << "The fourth constructor has been called!\n";
    //passing each property the assigned parameter
    name = Name;
    hunger = Critter::convToDouble(Hunger);
    boredom = Boredom;
    height = Height;
    thirst = Thirst;
    //print method inside so as to add only 1 line of code in test file
    print();
}

/*We won't need setters in the test in this problem, they are
left from the previous problem requirements.*/
void Critter::setName(string& newname) {
	name = newname;
}

//Setter for hunger should adjust to double value (public method)
void Critter::setHunger(int newhunger) {
	hunger = convToDouble(newhunger);
}

void Critter::setBoredom(int newBoredom) {
	boredom = newBoredom;
}

void Critter::setHeight(int newHeight) {
	height = newHeight;
}

void Critter:: setThirst(double newThirst) {
    thirst = newThirst;
}

/*Becasue the problem said hunger levels should be a double value
only internally, then the printed value for hunger should be an
integer again.*/
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << 
				Critter::convBack(hunger) << ".\n";
	//modifying the print funct to print the other properties
	cout << "My height is " << height << "." << endl;
	cout << "My boredom is " << boredom << "." << endl;
    cout << "My thirst is " << thirst << "." << endl;
}

//writing getter functions for good practice
string Critter::getName() {
	return name;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
	return boredom;
}

int Critter::getHeight() {
	return height;
}

double Critter::getThirst() {
    return thirst;
}