/*
CH-230-A
a13_p4.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include<iostream>
using namespace std;

/*The error this code generates is ambiguity because of 2 methods
in both base classes with the same name: The issue is that the
print method defined in A is an inherited function of both B and
C. The class D is derived from both B and C, so the compiler
doesn't know with which print method to use. To fix this ambiguity
we can use virtual inheritence. By setting B and C's inheritance as
virtual, we make sure that there is only one instance of the base
class A. This resolves the issue of using A's print method.*/

class A
{
int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
    public:
};
 
int main()
{
    D d;
    d.print();
    return 0;
}