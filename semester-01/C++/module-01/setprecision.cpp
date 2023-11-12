#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    float a = 10.5495465;
   cout<<fixed << setprecision(3) << a << endl;
    
    return 0;
}


/*
  NOTE: 
    - What is SetPrecision?
        - Setprecision is a function that is used to set precision of floating point value.
        - It is defined in iomanip header file.
        - in c it is defined in stdio.h header file. and we use %.2f to set precision. now in c++ we use setprecision() function.
        - example: cout << fixed << setprecion(2) << floatVariable << endl;
*/