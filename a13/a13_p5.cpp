/*
CH-230-A
a13_p5.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include<iostream>
using namespace std;

/*This code goes wrong when it tries to create a D object. When d is
created, an instance of A is created first. Since no parametric 
constructors can be automatically called when compiler is calling
constructors in (hierarchy) order and creating instances, an A instance
cannot be created since there is no value of x provided for A. So there
are two solutions: We could efine a default constructor for A that
initializes its x to a specific value, or we can create a defaule
constructor for D to initialize A with a specific value when its
called. I chose the first.*/
class A
{
  int x;
public:
  A(int i) { x = i; }
  A() { x = 15; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A
{
public:
  C():A(10) {  }
};
 
class D: public B, public C { };
 
int main()
{
    D d;
    d.print();
    return 0;
}