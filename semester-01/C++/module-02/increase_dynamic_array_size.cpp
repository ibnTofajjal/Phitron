#include <bits/stdc++.h>
using namespace std;

int main () {

    int *a = new int[3];
    int *b = new int[3];

    // take all the value of index and print all of them
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cout << a[i] << " "; 
    cout << endl;

    // Let's Copy The Values of a into b and check is it successfully copied or not;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i++) cout << b[i] << " ";

    //Let's Delete A[] bcz we've increase the size of a in a new way.
    delete[] a;

    // Let's check a is deleted or not;
    cout << endl << " Check A value" << endl;
    for (int i = 0; i < 3; i++) cout << a[i] << " "; 

    //Now Let's define the size of a is 5
    a = new int[5];

    // Now we've to add our previous values of a into the new a array...
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    // Now we can delete the variable called b bcz we've already moved our previous value into a;
    delete[] b;

    a[3] = 40;
    a[4] = 50;
    for (int i = 0; i < 5; i++) cout << a[i] << " ";
    
    return 0;
}




/*
    SHORT VERSION OF THIS CODE WITHOUT ANY EXPLANATION

    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    delete[] a;

    a = new int[5];
    for (int i = 0; i < 3; i++) a[i] = b[i];
   
    delete[] b;
    a[3] = 40;
    a[4] = 50;
    for (int i = 0; i < 5; i++) cout << a[i] << " ";


*/