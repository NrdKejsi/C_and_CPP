/*
CH-230-A
a13_p1.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    std::string sentence = "Hello, world!";

    // Find the position of the first occurrence of 'o' or 'd' in the sentence
    size_t position = sentence.find_first_of("od");

    //filename that we'll take from user
    string fileName;

    //needed for making a new file
    string findDot;
    string copy = "_copy";
    string extens;
    string newFile;

    //to get lines from the input file
    string line;

    cout << "Enter input file name: ";
    cin >> fileName;
    //declaring input file
    ifstream F_input(fileName);
    //declaring output File.
    ofstream F_output;

    //checking if our process worked
    if(!F_input){
        cout << "Error opening the file." << endl;
        exit(1);
    }

    //if our file did open
    else{
        //going to the position where there is a dot in the filename
        size_t pos = fileName.find_first_of('.');

        //getting the string before the dot
        findDot = fileName.substr(0, pos);
        extens = fileName.substr(pos, fileName.size());

        //concatenating so a new file (for output) is created created
        newFile = findDot + copy + extens; 
        F_output.open(newFile);

        if(!F_output){
            cout << "Error!\n";
            exit(1);
        }

        else {
            //good() function checks until EOF
            while (getline(F_input, line)) {
            // Printing it onto the new file
            F_output << line << endl;
            }
        }

    }

    //cosing the files in the end
    F_input.close();
    F_output.close();

    return 0;
}