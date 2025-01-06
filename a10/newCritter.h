/*
CH-230-A
a10_p6.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

//The header file
#include <string> // defines standard C++ string class

class Critter
{
private:  // data members are private
	std::string name;
	double hunger; 
	/*the public interface doesn't change, we declare two methods
	to convert to double and back. */
	double convToDouble(int hunger);
	int convBack(double hunger);
	int boredom;
	double height;
    double thirst;

public: // business logic methods are public
	//first constructor takes no parameters
	Critter();
	//2nd constructor takes only name as parameter
	Critter(std::string Name);
	//3rd constructor take name, hunger, boredom, height as parameter
	Critter(std::string Name, int Hunger, int Boredom, double Height = 10);
	//height has default value of 10 (if not specified)

    //new constructor to take all 5 values:
    Critter(std::string Name, double Thirst, int Hunger, int Boredom
            , double Height);

	//setters, for good practice (not used here-> constructors are enough)
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(int height);
    void setThirst(double newThirst);

	// getter methods
	std::string getName();
	int getHunger();
	int getBoredom();
	int getHeight();
    double getThirst();
	// service method
	void print();
};