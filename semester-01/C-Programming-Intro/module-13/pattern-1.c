#include <stdio.h>

int main () {

    int n, k = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // This Loop For Printing Line 
    {
        // Now I have to print star based on the Line No.
        for (int j = 0; j < k; j++) // The Loop Will run until j is less than k | and k is depended on i.
        {
            printf("*");
        }
        k++; // increase k value after print *
        printf("\n");
        
    }
    
    return 0;
}


/*
        # Let's Print Pattern Like this:
                *
                **
                ***
                ****
                *****
                ******
*/