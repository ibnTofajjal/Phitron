#include <bits/stdc++.h>
using namespace std;


class Student {
    public: 
    string name;
    int semister;
    double cgpa;
};

int main () {

    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].semister >> arr[i].cgpa;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j =  i+1; j < n; j++)
        {
            if(arr[i].cgpa > arr[j].cgpa)
            {
                swap(arr[i], arr[j]);
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
                cout << arr[i].name << " " << arr[i].semister << " " << arr[i].cgpa << endl;

    }
    
    
    

    return 0;
}