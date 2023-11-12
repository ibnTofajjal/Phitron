#include <iostream>
using namespace std;

int main () {

    int a;
    cin >> a;
    (a%2 == 0) ? cout << "Even" : cout << "Odd";
    return 0;
}


/*
    Ternary Operator:
        - Ternary operator is a conditional operator.
        - It is used to replace if else statement.
        - Syntax: (condition) ? (if true) : (if false);
        - Example: (a > b) ? cout << "a is greater than b" : cout << "b is greater than a";

    When To use
        - IF ELSE statement is used when we have to check multiple conditions. 
        - Ternary operator is used when we have to check only one condition.

*/