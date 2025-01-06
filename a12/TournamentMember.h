/*
CH-230-A
a12_p3.h
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <string>
#include <cstring>

class TournamentMember {
private:
    char FirstName[36];
    char LastName[36];
    char BirthDate[11];
    static std::string location;
    std::string role;
    std::string gender;

public:
    //constructors of three types
    TournamentMember();
    TournamentMember(char*, char*, char*, std::string, std::string);
    TournamentMember(const TournamentMember& );
    ~TournamentMember(); // destructor
    //setters
    void setFName(const char* n) {strcpy(FirstName, n);};
    void setLName(const char* n) {strcpy(LastName, n);};
    void setBdate(const char* b) {strcpy(BirthDate, b);};
    void setRole(std::string r) {role = r;};
    void setGender(std::string g) {gender = g;}; 
    //getters
    const char* getFName() const {return FirstName;};
    const char* getLName() const {return LastName;};
    const char* getBdate() const {return BirthDate;};
    static const std::string getLoc() {return location;};
    std::string getRole() const {return role;};
    std::string getGender() const {return gender;};
    //method to print data of object
    void printData();
    //method to change location
    void changeLoc(std::string); 
};

class Player : public TournamentMember {
private:
    int number;
    std::string position;
    int goals;
    std::string foot;

public:
//all types of constructors provided
    Player();
    Player(int, std::string, int, std::string);
    Player(const Player&);
    ~Player();  //destructor
//inline setters (not for goals)
    void setNumber(int n) {number = n;}
    void setPos(std::string p) {position = p;}
    void setFoot(std::string f) {foot = f;}
//inline getters for all data
    int getNumber() const {return number;}
    std::string getPos() const {return position;}
    std::string getFoot() const {return foot;}
    int getGoals() const {return goals;}
//method to print all data of player
    void print() const;
//method to increment goals
    void incrementGoals();
};
