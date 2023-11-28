#include <bits/stdc++.h>
using namespace std;


int* fun() { // we're return a int array that's why we have to add int + pointer sign before our function name

    int *arr = new int[5]; // Create a array in heap memory

    for (int i = 0; i < 5; i++)
    {
        cin>> arr[i]; // Taking input via loop from user
    }
    
    return arr;
}

int main () {

    int *myArr = fun (); // taking the arr 0 index address from fun function;

    for (int i = 0; i < 5; i++)
    {
        cout << myArr[i] << " "; // print the all of array indexes.
    }
    
    return 0;
}