/*
CH-230-A
a11_p2.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>

using namespace std;

//original code will stay the same
class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
        //adding destructor for wizard
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "Default constructor is being called for wizard!\n";
}

//the destructor for wizard should print message
Wizard::~Wizard() {
    cout << "Using wizard destructor now!\n";
}

//the first method for wizard with printed message
void Wizard::hover() const
{
    cout << "Hover method of wizard class being called!\n";
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


//creating new witch class derived from Creature
class Witch : public Creature {
    //two private properties
    private:
    int altitude;
    int power;

    //all constructors, destructors and methods 
    public:
    void fly() const;
    void withPower() const;
    Witch();
    Witch(int alt, int pow);
    ~Witch();
};

//default constructor with message to print on the screen
Witch::Witch() : altitude(120), power(8) {
    cout << "Default constructor is being called for witch!\n";
}

//parametric constructor with message to print on the screen
Witch::Witch(int alt, int pow) {
    cout << "Parametric constructor is being called for witch!\n";
    altitude = alt;
    power = pow;
}

//first witch class method definition
void Witch::fly() const {
    cout << "First method of witch class being called!\n";
    cout << "flying at " << altitude << " meters!\n";
}

//second witch class method definition
void Witch::withPower() const {
    cout << "Second method of witch class being called!\n";
    cout << "has the power level of " << power << "!\n";
}

//destructor which prints message when called
Witch::~Witch() {
    cout << "Using witch destructor now!\n";
}

//creating new goblin class derived from Creature
class Goblin : public Creature{
    private:
    int speed;
    int wealth;

    public:
    Goblin();
    Goblin(int Speed, int Wealth);
    ~Goblin();
    void fast() const;
    void withWealth() const;
};

//default constructor for Goblin with message to print on the screen
Goblin::Goblin() : speed(10), wealth(9) {
    cout << "Default constructor is being called for goblin!\n";
}

//parametric constructor for Goblin with message to print on the screen
Goblin::Goblin(int Speed, int Wealth) {
    cout << "Parametric contructor is being called for goblin!\n";
    speed = Speed;
    wealth = Wealth;
}

//first goblin class method definition
void Goblin::fast() const {
    cout << "First method of goblin class is being called!\n";
    cout << "has the speed level of " << speed << "!\n";
}

//second goblin class method definition
void Goblin::withWealth() const {
    cout << "Second method of goblin class is being called!\n";
    cout << "has wealth level of " << wealth << "!\n";
}

//destructor which prints message when called
Goblin::~Goblin() {
    cout << "Using goblin destructor now!\n";
}

int main()
{ 
    //creating one instance of wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //creating two instances of witches
    cout << "\nCreating the first witch.\n";
    Witch h1;
    h1.run();
    h1.fly();
    h1.withPower();

    cout << "\nCreating the second witch.\n";
    Witch h2(150, 7);
    h2.run();
    h2.fly();
    h2.withPower();

    //creating two instances of goblins
    cout << "\nCreating the first goblin.\n";
    Goblin g1;
    g1.run();
    g1.fast();
    g1.withWealth();

    cout << "\nCreating the second goblin.\n";
    Goblin g2(8, 10);
    g2.run();
    g2.fast();
    g2.withWealth();
    cout << endl;

    return 0;
} 