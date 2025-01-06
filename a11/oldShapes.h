/*
CH-230-A
a11_p5.h
Kejsi Nuredini
knuredini@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const;  	// prints the name  
        //setter for Shape class
        void setName(std::string);
        //getter for Shape class
        std::string getName() const;
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
        void setX(double);
        double getX() const;
        void setY(double);
        double getY() const;
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        void setEdges(int);
        int getEdges() const;
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        void setRadius(double);
        double getRadius() const;
        double perimeter() const;
        double area() const;
};

//adding class Rectangle derived from RegularPolygon
class Rectangle : public RegularPolygon {
    private:
        double width;
        double height;

    public:
        Rectangle();
        Rectangle(const std::string&, double, double, double, double);
        Rectangle(const Rectangle&);
        void setWidth(double);
        void setHeight(double);
        double getWidth() const;
        double getHeight() const;
        double perimeter() const;
        double area() const;
};

//adding class Square derived from Rectangle
class Square : public Rectangle {
    private:
    int side;

    public:
    Square();
    Square(const std::string&, double, double, double);
    Square(const Square&);
    void setSide(int);
    int getSide() const;
    double perimeter() const;
    double area() const;
};

#endif