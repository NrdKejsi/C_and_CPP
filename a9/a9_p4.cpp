/*
 CH-230-A
 a9_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>
#include <string>

//for easier writing
using namespace std;

//first function that takes 2 integers
int mycount(int first, int second){
    //return difference
    return second - first;
}

//2nd function that takes a char and a string
int mycount(char c, string s){
    int count = 0;
    //the loop will iterate the number of characters in string
    for(unsigned int i = 0; i < s.size(); i++){
        //if char is encountered, count increments
        if(s[i] == c){
            count ++;
        }
    }
    //return value of count
    return count;
}

int main(){
    int first, second;
    cin >> first;
    cin >> second;
    //print difference
    cout << "Difference:" << mycount(first, second) << endl;

    char c;
    string s;
    cin >> c;
    //getting newline character
    getchar();

    getline(cin, s);

    //printing number of occurrences
    cout << "Number of occurrences:" << mycount(c, s) <<endl;

    return 0;
}
