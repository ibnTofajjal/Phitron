#include <bits/stdc++.h>
using namespace std;

class Student {
    public:

    char name[100];
    int roll;
    double cgpa;
};

int main () {

    Student a,b;
    cin>> a.name >> a.roll>> a.cgpa;
    cin>> b.name >> b.roll>> b.cgpa;

    cout<< a.name << " " << a.roll << " " << a.cgpa << endl;  
    cout<< b.name << " " << b.roll << " " << b.cgpa << endl;  

    return 0;
}



/*
    NOTE:
        at line no> 15 and  16 we're taking the name of student using cin {Remember it: cin can not take double name or double word} so if we want to take doule name then we can use getline() fn instead of cin

        exp: cin.getline(a.name, 100)

*/