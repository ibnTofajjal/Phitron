#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun () {
    Student rahim(300, 6, 4.50);
    return rahim;
}

int main () {

    Student rahimSudent = fun();
    cout << rahimSudent.roll << " " << rahimSudent.cls << " " << rahimSudent.gpa << endl  ;
    return 0;
}