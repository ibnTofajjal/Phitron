#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", 2);
        }
        else if (a[i] == 0)
        {
            printf("%d ", 0);
        }
        else
        {
            printf("%d ", 1);
        }
        
        
    }
    
    return 0;
}



// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C