/*
CH-230-A
a13_p3.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    //reading number of files
    cin >> n;

    //allocating memory for a string array
    string* list = new string[n];
    for(int i = 0; i < n; i++) {
        //reading each input file name
        cin >> list[i];
    }

    string line; //string to write into output file repeatedly
    //opening output file in binary + appending mode
    ofstream Output("concatn.txt", ios::binary | ios::app);
    if(Output) { // if opened start opening all input files
        for(int i = 0; i < n; i++) {
            ifstream input(list[i], ios::binary | ios::in);
            if(input) {
                //while there is a line to read, print it to output
                while(getline(input, line)) {
                //endl at the end will seperate each file content
                    Output << line << endl;
                }
            } else {
                //error message in case file doesn't open
                 cout << "The input file cannot open!\n";
                exit(1);
            }
            input.close(); //closing input file
        }
    } else {
        //error message in case output file doesn't open
        cout << "The output file cannot open!\n";
        exit(1);
    }

    Output.close(); //closing output file

    return 0;
}