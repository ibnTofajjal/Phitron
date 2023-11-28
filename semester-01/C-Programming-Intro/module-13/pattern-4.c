#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int s = n-1;
    int k = 1;

    int l = n*2-1;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
             printf("*");
        }

        if (i <= n - 1)
        {
            s--;
            k+=2;
        } else {
            s++;
            k-=2;
        }
        printf("\n");
        
        
    }
    

    return 0;
}