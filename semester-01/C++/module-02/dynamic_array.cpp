#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;                 // initialize the array size
    cin >> n;              // take array size
    int *arr = new int[n]; // create dynamic memory
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking indexes
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i]; // printing all values
    }

    return 0;
}