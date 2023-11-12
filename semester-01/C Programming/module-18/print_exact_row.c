#include <stdio.h>


// Task: Print a single row 
int main () {

    // let's take input from user
    int row,col;
    scanf("%d %d", &row, &col);
    //let's inject the row and col into the array
    int arr[row][col];

    // let's take the array with the help of LOOP
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    // Now declear a value for the exact row/array
    int e;
    scanf("%d", &e);

    // let's loop over the col to get all the index of the exect row
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr[e][i]); // printing the exect array.
    }

    return 0;
}