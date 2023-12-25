#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    cout << "Line 5: " << &p << endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << "Line 12: "<< &ptr << endl;
    return 0;
}