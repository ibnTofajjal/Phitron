#include <stdio.h>

int main () {

    int i, N, odd = -1;
    scanf("%d", &N);

    for ( i = 1; i <= N; i++)
    {
        if (N == 1)
        {
            printf("%d", odd);
        } else if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    

    return 0;
}