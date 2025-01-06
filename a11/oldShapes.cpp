/*
CH-230-A
a11_p5.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include "oldShapes.h"
#include <cmath> //for pi value

using namespace std; 

Shape::Shape()
{ }

Shape::Shape(const string& n) : name(n) {
}

//Copy constructor #1 
Shape::Shape(const Shape& sh) {
    name = sh.name;
}

void Shape::printName() const {
	cout << name << endl;
}

//Shape setter member function definition
void Shape::setName(string Name) {
    name = Name;
}

//Shape getter member function definition
string Shape::getName() const {
    return name;
}

CenteredShape::CenteredShape() 
{ }

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//CenteredShape setters definitions (2)
void CenteredShape::setX(double nx) {
    x = nx;
}

void CenteredShape::setY(double ny) {
    y = ny;
}

//CenteredShape getters definitions (2)
double CenteredShape::getX() const {
    return x;
}

double CenteredShape::getY() const {
    return y;
}

//Copy constructor #2
CenteredShape::CenteredShape(const CenteredShape& c) {
    setName(c.getName());
    setX(c.getX());
    setY(c.getY());
}

RegularPolygon::RegularPolygon() 
{ }

//RegularPolygon setter definition
void RegularPolygon::setEdges(int Edges) {
    EdgesNumber = Edges;
}

//RegularPolygon getter definition
int RegularPolygon::getEdges() const {
    return EdgesNumber;
}

//Copy constructor #3
RegularPolygon::RegularPolygon(const RegularPolygon& p) {
    setName(p.getName());
    setX(p.getX());
    setY(p.getY());
    setEdges(p.getEdges());
}

//Circle setter definition
void Circle::setRadius(double radius) {
    Radius = radius;
}

//Circle getter definition
double Circle::getRadius() const {
    return Radius;
}

//Copy constructor #4
Circle::Circle(const Circle& c) {
    setName(c.getName());
    setX(c.getX());
    setY(c.getY());
    setRadius(c.getRadius());
}

//Circle Perimeter method
double Circle::perimeter() const {
    double p;
    p = 2 * M_PI * Radius;
    return p;
}

//Circle Area method
double Circle::area() const{
    double a;
    a = M_PI * Radius *Radius;
    return a;
}

//Rectangle setters definitions (2)
void Rectangle::setWidth(double Width) {
    width = Width;
}

void Rectangle::setHeight(double Height) {
    height = Height;
}

//Rectangle getters definitions (2)
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

//implementing the Rectangle constructor:
Rectangle::Rectangle(const std::string& n, double nx, double ny,
        double nwidth, double nheight) {
    setName(n);
    setX(nx);
    setY(ny);
    setWidth(nwidth);
    setHeight(nheight);
}

//Copy constructor #5
Rectangle::Rectangle(const Rectangle& r) {
    setName(r.getName());
    setX(r.getX());
    setY(r.getY());
    setWidth(r.getWidth());
    setHeight(r.getHeight());
}

//Rectangle Perimeter method
double Rectangle::perimeter() const {
    double p;
    p = 2 * (height + width);
    return p;
}

//Rectangle Area method
double Rectangle::area() const{
    double a;
    a = width * height;
    return a;
}

//Square setter definition
void Square::setSide(int Side) {
    side = Side;
}

//Square getter definition
int Square::getSide() const {
    return side;
}

//implementing the Square constructor:
Square::Square(const std::string& n, double nx, double ny, double nside){
    setName(n);
    setX(nx);
    setY(ny);
    setSide(nside);
}

//Copy constructor #6
Square::Square(const Square& sq) {
    setName(sq.getName());
    setX(sq.getX());
    setY(sq.getY());
    setSide(sq.getSide());
}

//Square Perimeter method
double Square::perimeter() const {
    double p;
    p = 4 * side;
    return p;
}

//Square Area method
double Square::area() const {
    double a;
    a = side * side;
    return a;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//default Rectangle constructor with values of 0
Rectangle::Rectangle() :  width(0), height(0)
{}

//default Square constructor with value of 0
Square::Square() : side(0) 
{}