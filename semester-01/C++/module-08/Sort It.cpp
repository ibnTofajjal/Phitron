#include <bits/stdc++.h>
using namespace std;



class Student {
public:
    string name;
    int id;
    int cls;
    char section;
    int total_marks;
    int eng_marks;
    int math_marks;

    void calculating_total_mark() {
        total_marks =  eng_marks + math_marks ;
    }
};

bool compareStudents(const Student& a, const Student& b) {
    if (a.total_marks == b.total_marks) {
        return a.id < b.id;
    }
    return a.total_marks > b.total_marks;
}

int main() {
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;

        students[i].calculating_total_mark();
    }

    sort(students, students + N, compareStudents);

    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}


/*
    Problem: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-04/challenges/sort-it-6-2

*/