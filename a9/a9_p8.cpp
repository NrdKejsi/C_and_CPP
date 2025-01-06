/*
 CH-230-A
 a9_p8.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <iostream>

using namespace std;

void subtract_max(int array[], int n){
    int max;
    //if array is empty:
    if(n <= 0){
        cout << "List = empty, no maximum to subtract!" << endl;
        return;
    }

    //if array has only one element:
    else if(n == 1){
        max = array[0];
    }

    //otherwise, we have to iterate through the array
    else{
        //initializing max as the first element
        max = array[0];
        //running through loop to find maximum value
        for(int i = 0; i < n; i++){
            if(array[i + 1] > array[i])
                max = array[i + 1];
        }
    }

    //subtracting max from each element of the array:
    for(int i = 0; i < n; i++){
        array[i] -= max;
    }
}

void deallocate(int array[], int n){
    delete [] array;
}

int main(){
    int n, i;
    cin >> n;

    //dynamically allocating memory for integer array
    int* a = new int[n];

    //reading array from user
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    //calling 1st function
    subtract_max(a, n);
    //if list isn't empty we print new values
    if(n != 0){
        cout << "Your array now looks like this:" << endl;
        for(i = 0; i < n; i++){
            cout << a[i] << endl;
        }
    }

    //freeing the memory allocated for array
    deallocate(a, n);

    return 0;
}