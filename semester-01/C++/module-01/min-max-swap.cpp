#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main () {

    int a = 10, b = 20, c = 30, d = 40;
    cout << min(a, b) << endl;
    cout << max(a, b) << endl;
    cout << min({a, b, c, d}) << endl;
    cout << max({a, b, c, d}) << endl;

    swap(a, b);

    return 0;
}


/*
    Note: 
        - Min generally used for finding the minimum value from an array. 
            - if we need to compare two values, then we can use min(a, b). or if we need to       compare three or more values, then we can use min({a,b,c,d}).

        - Max generally used for finding the maximum value from an array.
             - if we need to compare two values, then we can use min(a, b). or if we need to compare three or more values, then we can use min({a,b,c,d}).

        - Swap generally used for swapping two values.
            - Firt of all we need to include utility library.
            - Then we can use swap(a, b) for swapping two values.
*/