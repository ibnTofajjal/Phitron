#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    switch (x)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    default:
        cout << "kichu mile nai" << endl;
    }
    return 0;
}


/*
    Note: 
        - Why we need to use Switch Case?
            - When we need to check a variable with multiple values.
            - When we need to check a variable with multiple values and we need to do something for each value.

        - If we don't use break, then it will execute all the cases after the matching case.
        
        - If we don't use default, then it will not show anything if the variable doesn't match with any case.
*/