/*
CH-230-A
a10_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <string>

 class City
 {
    private:
    //setting properties of city class as private
    std::string name;
    float inhabitants;
    std::string mayor;
    double area;

    public:
    //setters for each property
    void setName(std::string newName);
    void setInhabitants(float newInhabitants);
    void setMayor(std::string newMayor);
    void setArea(double newArea);
    //getters for each property
    int getInhabitants();
    double getArea();
    std::string getName();
    std::string getMayor();
 };