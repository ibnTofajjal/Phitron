#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    // Let's Sort the Items in a ascending order
    sort(arr, arr + n); // the sort func is take 2 parameters First Param is: Starting Pointer of the array and Second Param is: Ending Pointer of the array, that's mean a+n
    for(int i = 0; i< n; i++) cout << arr[i] << " ";
    cout << '\n';

    // Let's Sort the Items in a desending order
    sort(arr, arr +n, greater<int>());
    for(int i = 0; i< n; i++) cout << arr[i] << " ";
    
    
    return 0;
}