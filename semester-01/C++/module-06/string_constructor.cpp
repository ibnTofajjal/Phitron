#include <bits/stdc++.h>
using namespace std;

int main () {

    // 01;
    string s1= "Hello World";
    cout << s1 << endl; // Return => Hello World

    // 02;
    string s2("Hello World");
    cout << s2 << endl; // Return => Hello World

    // 03;
    string s3(5, 'n');
    cout << s3 << endl; // Return => nnnnn

    // 04;
    string s4("Hello World", 5); 
    cout << s4 << endl; // Return => Hello

    // 05;
    string myString = "Hello World";
    string s5(myString, 6); 
    cout << s5 << endl; // Return => World

    // 06;
    string s6(myString, 6, 3);
    cout << s6 << endl; // Return => Wor

    // 07;
    string s7(s1);
    cout << s7 << endl; // Return => Hello World
    
    return 0;
}