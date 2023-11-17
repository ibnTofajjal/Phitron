#include <bits/stdc++.h>
using namespace std;


class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll =roll;
        this->cls =cls;
        this->gpa =gpa;
    }

};

int main () {

    Student* raheem = new Student(30, 10, 3.67);
    cout << raheem->cls << " " << raheem->gpa << " " << raheem->roll << endl;

    return 0;
}