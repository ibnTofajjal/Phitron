#include <stdio.h>

int main () { 
    // first array indicate how many row or array he will take and 2nd array will take the Size Of Array
    int arr[5][4]; 

    // Now if we want to take the array using loog then it should look like this 
    for (int i = 0; i < 5; i++) // 
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]); // i will take all of array and j will take all of array's size
        }
        
    }

    // Now If We want to print the 2 Dimentional Array with the help of loop:
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]); // it should return those element which we recive from Scanf()
        }
        printf("\n");
    }
    
    return 0;
}