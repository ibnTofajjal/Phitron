#include <stdio.h>

// Let's Create a Recursion Function
void fun(int n)
{
    if(n == 0) return;
    int x = n%10;
    fun(n/10);
    printf("%d ", x);

}

int main () {
    // let's create a testCase Loop 
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("%d", 0);
        }
        printf("\n");
    }
    
    return 0;
}

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D