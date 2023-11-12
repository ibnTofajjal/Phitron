#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    for (int i = 0; i <= 4; i++) // i <= 4 | explanation: array size is 5, but index starts from 0, so 4 is the last index
    {
        sum += arr[i];
    }
    printf("%d\n", sum);

    return 0;
}