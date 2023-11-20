#include <bits/stdc++.h>
using namespace std;

void reverse_word(stringstream &ss){
    string word;
    if (ss >> word)
    {
        reverse_word(ss);
        cout << word << endl;
    }
    
}

int main () {

    string s;
    getline(cin, s); // Input: Hello CPP World
    stringstream ss(s); // stringstream is a class that is used to split a string into words.
    reverse_word(ss); 

    return 0;
}



