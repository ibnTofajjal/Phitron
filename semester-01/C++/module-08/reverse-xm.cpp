#include <bits/stdc++.h>
using namespace std;

class Student {
    public:

    string nm;
    int cls;
    char s;
    int id;

};

int main () {

    int n;
    cin >> n;
    Student studentObj[n];

    for(Student &x : studentObj) cin >> x.nm >> x.cls >> x.s >> x.id ;
    
    for(int i = 0, j = n-1; i < j; i++, j--)
    {
        swap(studentObj[i].s, studentObj[j].s);
    }
    
    for(Student x : studentObj) cout << x.nm << " " <<  x.cls << " " <<  x.s << " " << x.id << endl;

    
    return 0;
}

/*
    Problem: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-04/challenges/reverse-it-8-2
*/