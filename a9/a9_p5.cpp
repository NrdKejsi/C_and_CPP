/*
 CH-230-A
 a9_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
//for computing random number
#include <ctime>

//for easier writing
using namespace std;

int main(){
    //declaring all the variables
    string name;
    int count = 0;
    int userGuess;
    int randomNum;
    int randomInRange;

    //asking the player for name
    cout << "Enter your name:" << endl;
    cin >> name;
    //telling user to pick a number 1 to 100
    cout << name << ", pick a random number from 1 to 100:" << endl;
    //computing random number and converting it into 1-100 range
    srand(static_cast <unsigned int> (time(0)));
    randomNum = rand();
    randomInRange = (randomNum % 100) + 1;

    //loop where player has to guess
    while(1){
        //increment number of tries
        count++;
        //read player's guess
        cin >> userGuess;
        //if guess is too high 
        if(userGuess > randomInRange){
            cout << "You guessed too high :(" << endl;
            cout << "Try again:" << endl;
        }
        //if guess is too low
        if(userGuess < randomInRange){
            cout << "You guessed too low >:(" << endl;
            cout << "Try again:" << endl;
        }
        //loop breaks if player guesses correct
        else if(userGuess == randomInRange){
            cout << "You guessed right! :)" << endl;
            cout << name << ", claim your award -> 🏆" << endl;
            break;
        }
        //display number of tries (the count)
        cout << "Number of tries: " << count << endl;
    }
    return 0;
}
