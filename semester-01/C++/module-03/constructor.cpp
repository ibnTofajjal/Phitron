#include <bits/stdc++.h>
using namespace std;

class Student {
    public:

    int age;
    int roll;
    double cgpa;

    Student(int age, int roll, double cgpa) {
        this -> age = age;
        this -> roll = roll;
        this -> cgpa = cgpa;
    }
};

int main () {

    Student joynal(20,5130,3.50);
    Student kamal(25,3080,2.60);
      

    return 0;
}
