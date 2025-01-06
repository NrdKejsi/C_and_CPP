/*
CH-230-A
a11_p1.cpp
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

using namespace std;

int main() {
    int n;
    Box *BoxArr;
    //reading number of boxes n
    cout << "Enter number of boxes:\n";
    cin >> n;

    //finding size
    int size = 2 * n;
    //allocating memory for array of boxes
    BoxArr = new Box[size];

    double Height;
    double Width;
    double Depth;

    //writing loop to read each box up to n & then copy the rest
    for(int i = 0; i < size; i++) {
        //once we get past n boxes, we start copying the rest
        if(i >= n) {
            BoxArr[i] = Box(BoxArr[i - n]);
        }
        //up to n boxes, we read the parameters
        else {
            //reading height
            cout << "Enter height for box " << i + 1 << endl;
            cin >> Height;
            BoxArr[i].setHeight(Height);
            //reading width
            cout << "Enter width for box " << i + 1 << endl;
            cin >> Width;
            BoxArr[i].setWidth(Width);
            //reading depth
            cout << "Enter depth for box " << i + 1 << endl;
            cin >> Depth;
            BoxArr[i].setDepth(Depth);
        }
    }

    double volume;
    //writing loop to compute the volume
    for(int i = 0; i < 2 * n; i++) {
        cout << "Computing volume for box " << i + 1 << endl;
        volume = BoxArr[i].volume();
        cout << "Volume for box " << i + 1 << " is:\n";
        cout << volume << endl;
    }

    return 0;
}