/*
CH-230-A
a13_p8.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include <exception>

using namespace std;

//a class Motor that throws a message
class Motor {
//does not have properties
public:
//when a Motor object is created, the message is automatically thrown
    Motor() {
        throw("This motor has problems");
    }
};

//a Car class that has a motor object as a property
class Car {
private:
    Motor m;
public:
    Car() {
        //when a Car obj is created, a motor will be instantiated also
        Motor mot;
    }
};

//a Garage class that has a Car object as a property
class Garage {
private:
    Car c;
public:
//in the empty garage constructor we write the funct-level try block
    Garage() try: c() { //it tries creating the Car object property
    } catch(const char* exc) {
        //catches the error of the Motor and prints it out
        cerr << exc << endl;
        //then throws the different exception
        throw("The car in this garage has problems with the motor");
    }
    
};


int main() {
    //trying to create a garage object
    try {
        Garage g;
    } catch(const char* exc) { //catching the last msg thrown
        //printing it out:
        cerr << exc << endl;
    } 

    return 0;
}