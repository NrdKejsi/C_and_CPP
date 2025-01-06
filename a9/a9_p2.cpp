/*
 CH-230-A
 a9_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>
//for easier writing
using namespace std;

int main(){
    //reading integer n
    int n;
    cin >> n;
    //reading a double x
    double x;
    cin >> x;
    //reading a string s
    string s;
    cin >> s;
    //writing a loop to print double & string accordingly
    for(int i = 0; i < n; i++){
        cout << s << ":" << x << endl;
    }
    return 0;
}