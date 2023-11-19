#include <bits/stdc++.h>

using namespace std;



class Student {
public:
    int id;
    string name;
    char section;
    int totalMarks;

    void setInfo(int id, string name, char section, int totalMarks) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }

    void printInfo() {
        cout << id << " " << name << " " << section << " " << totalMarks << endl;
    }
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        Student student1;
        Student student2;
        Student student3;

        int id;
        string name;
        char section;
        int totalMarks;

        cin >> id >> name >> section >> totalMarks;
        student1.setInfo(id, name, section, totalMarks);

        cin >> id >> name >> section >> totalMarks;
        student2.setInfo(id, name, section, totalMarks);

        cin >> id >> name >> section >> totalMarks;
        student3.setInfo(id, name, section, totalMarks);

        Student topStudent;

        if (student1.totalMarks >= student2.totalMarks && student1.totalMarks >= student3.totalMarks) {
            topStudent = student1;
        } else if (student2.totalMarks >= student1.totalMarks && student2.totalMarks >= student3.totalMarks) {
            topStudent = student2;
        } else {
            topStudent = student3;
        }

        topStudent.printInfo();
    }

    return 0;
}



/*
    Q: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/who-is-it-4/submissions/code/1370680141
    Solve with Google Bard
*/