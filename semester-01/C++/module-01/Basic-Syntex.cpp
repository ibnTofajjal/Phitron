#include <iostream>
using namespace std;

int main () {
    cout << "Hello World!\n";
    int a = 10;
    cout << a << endl;
    cout << "Value of a is: " << a << endl;
    
    
    // Let's try to take input from user
    int b;
    cin>>b;
    cout<<"Value of b is: "<<b << endl;

    char c;
    cin>>c;
    cout<<"Value of c is: "<<c << endl;

    return 0;

}



/*
NOTE:
    - C++ has no format specifiers like %d or %f in C.
    - C++ has cout<< and cin instead of printf and scanf.
    - cout<< is not built-in function. It is defined in header file iostream with std namespace.
    - New Line character is represented by \n.
    - endl is used to insert a new line.
    - typecasting is done by (type)variable_name.
*/