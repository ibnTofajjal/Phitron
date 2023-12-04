#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) // O(logN)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }

    for(int i=1;i<=n;i=i*2) // O(logN)
    {
        cout<<i<<endl;
    }
    return 0;
}


/*

    O(logN) is Better than O(N) because if we increase the value of N then the complexity of O(N) will increase linearly but the complexity of O(logN) will increase slowly.


*/