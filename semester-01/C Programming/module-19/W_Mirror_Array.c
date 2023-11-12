#include <stdio.h>

int main () {

    // Requirement: We Need To print 2d array in a inverted way. [ okay let's do this ]

    // Step: 1. Declear array row and col with N(row) and M(col)
    // Step: 2. Take input the value of those
    // Step: 3. Declear 2D array with the help of N and M
    int N,M;
    scanf("%d %d", &N, &M);
    int arr[N][M];

    // Step: 4. Let's Take input for the N and M
    for (int i = 0; i < N; i++) // Looping Over the N
    {
        for (int j = 0; j < M; j++) // Looping Ove the M
        {
            scanf("%d", &arr[i][j]); // Taking value of the M for ever N[row]
        }
        
    }

     // Step: 5. Let's Take input for the N and M
    for (int i = 0; i < N; i++) // Looping Over the N
    {
        for (int j = M-1; j >= 0; j--) // Looping Ove the M
        {
            printf("%d ", arr[i][j]); // Taking value of the M for ever N[row]
        }
        printf("\n");
    }
    
    return 0;
}


// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W