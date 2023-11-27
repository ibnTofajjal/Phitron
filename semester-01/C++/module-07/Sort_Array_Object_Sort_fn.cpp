#include <bits/stdc++.h>
using namespace std;


/*
    * Create a Student Class
    * Define Student Attribute
    * Take how many student's Details You want to get
    * Taking the Whole student's Details throw loop
    * Print the whole student's Details Object

*/

    // * Create a Student Class
class Student {

    public: 

//     * Define Student Attribute
    string name;
    int roll;
    char section;
    int marks;

};

bool cmp(Student a, Student b){
    return (a.marks <= b.marks) ? true : false;
    // return a.marks <= b.marks;
    
}

int main () {
    // * Take how many student's Details You want to get
    int n;
    cin >> n;
    Student arr[n];

    // * Taking the Whole student's Details throw loop
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].section >> arr[i].marks;
    }

  sort(arr, arr + n, cmp);

    // * Print the whole student's Details Object
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].section << " " << arr[i].marks << endl;
    }
    
    
    return 0;
}




/*

    Sort Object Based On Student Marks.

    we can use sort() function to sort a object but there is a problem, sort() fn do not work properly for Array Of Object You need to Create a System to Compare of 2 value. Now Here's the comparision system explanation

    first of all we need to create a function. who return a boolean value. 

    bool cmp() -> now the cmp() fn will takes params to compare, and Paaram Data_Type Should be your class name.  

    bool cmp(Student a, Student b) {
        // Here you need to write logic. of how you want to compare your data. Let's say we want to sort our data in accending order

        if(a.marks <= b.marks) {
            return true;
        } else {
            return false;
        }

        TERNERY OPERATOR: return (a.marks <= b.marks) ? true : false;


    }

*/