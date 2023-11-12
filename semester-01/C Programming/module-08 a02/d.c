#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", arr[n - i - 1]);
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", arr[n - i - 1]);
            }
        }
    }

    return 0;
}
