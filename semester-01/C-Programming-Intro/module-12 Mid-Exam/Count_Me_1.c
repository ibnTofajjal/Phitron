#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int forTwo = 0;
    int forThree = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            forTwo++;
        } else if (a[i] % 3 == 0)
        {
            forThree++;
        }
        
    }

    printf("2: %d 3: %d ", forTwo, forThree);
    
    

    return 0;
}



/*

    Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/count-me-2-1/problem

*/