#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index;
    scanf("%d", &index);

    int value;
    scanf("%d", &value);

    arr[index] = value;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[n - i - 1]);
    }

    return 0;
}