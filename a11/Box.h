/*
CH-230-A
a11_p1.h
Kejsi Nuredini
knuredini@jacobs-university.de
*/

class Box {
private:
    //all properties:
    double height;
    double width;
    double depth;

public:
    //setter methods:
    void setHeight(double newHeight);
    void setWidth(double newWidth);
    void setDepth(double newDepth);
    //getter methods:
    double getHeight();
    double getWidth();
    double getDepth();
    //method for computing volume:
    double volume();
    //default constructor
    Box();
    //constructor that sets data members
    Box(double Height, double Width, double Depth);
    //copy constructor
    Box(const Box &b);
    //destructor
    ~Box();
};