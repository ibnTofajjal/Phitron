#include <stdio.h>

int main () {

    int row, col;
    scanf("%d %d", &row, &col );
    int a[row][col], b[row][col], c[row][col];

    // Let's Take [a] array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Let's Take [b] array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Let's add the sum of a and b into the C 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           c[i][j] = a[i][j]+b[i][j]; 
        }
    }
    // Let's Print the C Array
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}


// Problem Link:  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N