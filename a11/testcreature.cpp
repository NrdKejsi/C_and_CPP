/*
CH-230-A
a11_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

//the main function is included in the test file
int main()
{ 
    //creating one instance of wizard
    std::cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //creating one instance of witch
    std::cout << "\nCreating a Witch.\n";
    Witch h;
    h.run();
    h.fly();
    h.withPower();

    //creating two instances of goblins
    std::cout << "\nCreating a Goblin.\n";
    Goblin g;
    g.run();
    g.fast();
    g.withWealth();

    std::cout << std::endl;

    return 0;
} 