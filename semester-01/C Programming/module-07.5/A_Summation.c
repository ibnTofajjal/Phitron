#include <stdio.h>

int main () {

    long long int N;
    scanf("%lld", &N);
    long long int A[N];
    long long int sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    
    if (sum < 0)
    {
        long long int convertedValue = sum * -1;
        printf("%lld", convertedValue);
    } else 
    {
        printf("%lld", sum);
    }

    return 0;
}


// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A