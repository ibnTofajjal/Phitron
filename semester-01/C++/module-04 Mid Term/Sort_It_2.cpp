#include <bits/stdc++.h>
using namespace std;

int* sort_it(int &n) {
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    return a;
}

int main() {
    int n;
    cin >> n;
    int *sortedArray = sort_it(n);
    for (int i = 0; i < n; i++) cout << sortedArray[i] << " ";
    delete[] sortedArray;
    return 0;
}



/*

Q.https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/sort-it-2-1-1/submissions/code/1370677461
*/