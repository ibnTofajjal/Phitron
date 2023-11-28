#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int i, x, max = 0;
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x > max) {
            max = x;
        }
    }

    printf("%d\n", max);

    return 0;
}