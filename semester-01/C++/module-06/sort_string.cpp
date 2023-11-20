#include <bits/stdc++.h>
using namespace std;

int main () {

    string s;
    getline(cin, s); // Input: Hello World 
    sort(s.begin(), s.end());
    cout << s << endl; // Return =>  HWdellloor 
    // HW is come first because of ASCII value

    return 0;
}