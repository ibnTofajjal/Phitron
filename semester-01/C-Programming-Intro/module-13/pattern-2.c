#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int s = n-1;
    int k = 1;

    for (int i = 0; i < n; i++)
    {
        // let's Print S time 'space'
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        
        // let's print K times '*'
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s--;
        k+=2;
        printf("\n");
        
    }
    
    return 0;
}