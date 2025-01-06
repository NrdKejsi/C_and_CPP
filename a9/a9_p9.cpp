/*
 CH-230-A
 a9_p9.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

//for easier writing
using namespace std;

int main(){
    //initializing our array with all possible choices
    string arr[17] = {"computer", "television", "keyboard", "laptop",
        "mouse", "screen", "colour", "noise", "complain", "wire", 
        "intelligence", "headphones", "terminal", "extension", 
        "campus", "costume", "tired"};
    
    int random, idx, count;
    string chosen, playerGuess;

    //big loop that guesses new words if player wants to play again
    while(1){
        //generating random number
        srand(static_cast<unsigned int>(time(0)));
        random = rand();
        //so the random number to be within the array indexes range
        idx = (random % 17);  // 0 to 16
        //'chosen' string will be modified & actual array element won't
        chosen = arr[idx];
        //loop to read each char and replace vowels with '_'
        for(string :: size_type i = 0; i < arr[idx].size(); i++){
            if(arr[idx][i] == 'a' || arr[idx][i] == 'e' ||
            arr[idx][i] == 'i' || arr[idx][i] == 'o' || arr[idx][i] == 'u'
            || arr[idx][i] == 'y' || arr[idx][i] == 'A' ||
            arr[idx][i] == 'E' || arr[idx][i] == 'I' || arr[idx][i] == 'O'
            || arr[idx][i] == 'U' || arr[idx][i] == 'Y')
            {
                chosen[i] = '_';
            }
            else {
                chosen[i] = arr[idx][i];
            }
        }
        cout << "The word you have to guess:" << endl;
        cout << chosen << endl;

        cout << "Guess:" << endl;
        //guessing loop begins here
        while(1){
            //incrementing number of tries and reading guess of user
            count++;
            cin >> playerGuess;

            //if player guessed right
            if(playerGuess == arr[idx]){
            cout << "🌟You did it!🌟" << endl;
            cout << "Number of tries: " << count << endl;

            //resetting count of tries for next round
            count = 0;
            //closing inner while loop
            break;
            }

            //if player guessed wrong, loop continues
            else {
                cout << "Err, wrong guess.☹️ Try again:⬇️" << endl;
            }
        }
        //asking player if they want to keep playing
        cout << "Do you want to keep playing?" << endl;
        cout << "Enter 'quit' if you want to stop: " << endl; 
        cout << "Enter anything else to keep going." << endl;

        string playAgain;
        cin >> playAgain;

        //if player enters quit
        if(playAgain == "quit"){
            break;
        }
    }
    return 0;
}
