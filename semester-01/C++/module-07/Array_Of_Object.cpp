#include <bits/stdc++.h>
using namespace std;


class Student {
    public: 

    string name;
    int age;
    double gpa;
};

int main () {

    int n;
    cin >> n;
 
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].age >> arr[i].gpa;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].gpa << endl;
    }
    
    

    return 0;
}