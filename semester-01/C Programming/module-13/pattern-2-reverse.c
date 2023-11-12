#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int s = n - 1;
    int k = n * 2 - 1;

    for (int i = 1; i <= n; i++)
    {
        // let's print the space first
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // let's print the star 
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s++;
        k -= 2;
        
        printf("\n");
        
    }
    
    return 0;
}