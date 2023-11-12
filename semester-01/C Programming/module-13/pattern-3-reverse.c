
/*
#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int k = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= k; j++)
        {
            printf("%d ", j);
        }
        k++;
        printf("\n");

    }



    return 0;
}

 result: [


5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

 ]

*/

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int k = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        k--;
        printf("\n");
    }

    return 0;
}

/*

    result: [
        1 2 3 4 5 
        1 2 3 4 
        1 2 3 
        1 2 
        1 
    ]

*/