#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; // O(1)
    cin>>n; // O(1)
    int a[n]; // O(1)
    for(int i=0;i<n;i++) // O(N)
    {
        cin>>a[i]; // O(1)
    }
    int s=0; // O(1)
    for(int i=0;i<n;i+=2) // O(N)
    {
        s+=a[i]; // 0(1)
    }
    cout<<s<<endl; // O(1)
    return 0;
}

/*
    Complexity Analysis:
        0(1) + 0(1) + 0(1) + 0(N) + 0(1) + 0(N) + 0(1) = 0(2N) + 0(4)
        0(4) mainly not considered because it is a constant. now if we look intor 0(2N) then we can see that 2 is also a constant. so we can say that 0(2N) = 0(N)

        so the final complexity is 0(N)
        if N = 10 then the complexity is 0(10)
*/