#include <bits/stdc++.h>
using namespace std;

int main () {

    string s;
    getline(cin, s); // Input: Hello World
    for (auto i : s) {
        cout << i << endl;
    }
    return 0;
}
/*
    In Line 8: 'auto' is a keyword that tells the compiler to
    automatically detect the type of the variable that is being declared.
    and 'i' is a variable that is declared automatically.
    and 's' is a string variable.
*/ 